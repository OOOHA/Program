#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<wchar.h>
using namespace std;
const int maxn = 5e4 + 10;
map<pair<int, int>, pair<int, int> >south;
map<pair<int, int>, pair<int, int> >north;
map<pair<int, int>, pair<int, int> >west;
map<pair<int, int>, pair<int, int> >east;
pair<int, int> no_exist = make_pair(0, 0);
pair<int, int> s_find(pair<int, int> root)
{
    if (root != south[root]) south[root] = s_find(south[root]);
    return south[root];
}
pair<int, int> n_find(pair<int, int>root)
{
    if (root != north[root]) north[root] = n_find(north[root]);
    return north[root];
}
pair<int, int> w_find(pair<int, int>root)
{
    if (root != west[root]) west[root] = w_find(west[root]);
    return west[root];
}
pair<int, int> e_find(pair<int, int>root)
{
    if (root != east[root]) east[root] = e_find(east[root]);
    return east[root];
}
void n_join(pair<int, int>son1, pair<int, int>son2) 
{
    son1 = n_find(son1);
    son2 = n_find(son2);
    if (son1 != son2)
    {
        if (son1.first < son2.first)
            north[son2] = son1;
        else
            north[son1] = son2;
    }
}
void s_join(pair<int, int>son1, pair<int,int>son2) 
{
    son1 = s_find(son1);
    son2 = s_find(son2);
    if (son1 != son2)
    {
        if (son1.first > son2.first)
            south[son2] = son1;
        else
            south[son1] = son2;
    }
}
void w_join(pair<int, int>son1, pair<int, int>son2) 
{
    son1 = w_find(son1);
    son2 = w_find(son2);
    if (son1 != son2)
    {
        if (son1.second < son2.second)
            west[son2] = son1;
        else
            west[son1] = son2;
    }
}
void e_join(pair<int, int>son1, pair<int, int>son2)
{
    son1 = e_find(son1);
    son2 = e_find(son2);
    if (son1 != son2)
    {
        if (son1.second > son2.second)
            east[son2] = son1;
        else
            east[son1] = son2;
    }
}
void update(pair<int, int>cur) 
{
    pair<int, int>next;
    next = make_pair(cur.first - 1, cur.second);
    north[cur] = cur;
    south[cur] = cur;
    west[cur] = cur;
    east[cur] = cur;
    if (north[next] != no_exist)
    {
        n_join(cur, next);
        s_join(cur, next);
    }
    next = make_pair(cur.first + 1, cur.second);
    
    if (south[next] != no_exist)
    {
        s_join(cur, next);
        n_join(cur, next);
    }
    next = make_pair(cur.first, cur.second - 1);
    
    if (west[next] != no_exist)
    {
        w_join(cur, next);
        e_join(cur, next);
    }
    next = make_pair(cur.first, cur.second + 1);
    
    if (east[next] != no_exist)
    {
        e_join(cur, next);
        w_join(cur, next);
    }
    return;
}
int main()
{
    int T,N, R, C;
    int x, y, cnt = 1;
    string order;
    cin >> T;
    pair<int, int> fa1, fa2, cur, next;
    while (T--)
    {
        cin >> N >> R >> C >> x >> y;
        cin >> order;
        south.clear();
        north.clear();
        east.clear();
        west.clear();
        cur.first = x;
        cur.second = y;
        update(cur);
        for (int i = 0; i < N; i++)
        {
            if (order[i] == 'N')
            {
                cur = n_find(cur);
                next = make_pair(cur.first - 1, cur.second);
            }
            else if (order[i] == 'S')
            {
                cur = s_find(cur);
                next = make_pair(cur.first + 1, cur.second);
            }
            else if (order[i] == 'W')
            {
                cur = w_find(cur);
                next = make_pair(cur.first, cur.second - 1);
            }
            else
            {
                cur = e_find(cur);
                next = make_pair(cur.first, cur.second + 1);
            }
            cur = next;
            update(cur);
        }
        printf("Case #%d: %d %d\n", cnt, cur.first, cur.second);
        cnt += 1;
    }
    system("pause");
    return 0;
}

