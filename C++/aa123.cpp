#include<iostream>
using namespace std;

int main()
{
    int start_vertex = 0;
        int d[] = { 99999, 99999, 99999, 99999, 99999, 99999, 99999, 99999 };
        int pre[] = { -1, -1, -1, -1, -1, -1, -1, -1 };
        int S[]= { -1, -1, -1, -1, -1, -1, -1, -1 };
        int Q[] = { 0, 0, 0, 0, 0, 0, 0, 0 };
        int graph[][8]=
        {
            { 0, 0, 0, 0, 0, 0, 0, 0 }, { 300, 0, 0, 0, 0, 0, 0, 0 }, { 1000, 800, 0, 0, 0, 0, 0, 0 },
            { 0, 0, 1200, 0, 0, 0, 0, 0 }, { 0, 0, 0, 1500, 0, 250, 0, 0 }, { 0, 0, 0, 1000, 0, 0, 900, 1400 },
            { 0, 0, 0, 0, 0, 0, 0, 1000 }, { 1700, 0, 0, 0, 0, 0, 0, 0 }, };

        cout << "Please enter start vertex : "<< endl;
        cin >> start_vertex;
        d[start_vertex] = 0;
        pre[start_vertex] = 0;
        S[0] = start_vertex;
        Q[start_vertex] = -1;

        add(start_vertex, graph, d, pre, S, Q);


    return 0;
}

void add(int v, int graph[][8], int d[], int pre[], int S[], int Q[])
{
    int size = sizeof(graph) / sizeof(graph[0][0]);
    for (int i = 0; i < size; i++) {
            int min = 9999;
            for (int j = 0; j < size; j++) {
                if (graph[v][j] != 0) {
                    pre[j] = v;
                    if (d[j] > d[v] + graph[v][j]) {
                        d[j] = d[v] + graph[v][j];
                    }
                }
            }
            for (int p = 0; p < size; p++) {
                if (Q[p] != -1) {
                    if (d[p] < min) {
                        min = d[p];
                        S[i + 1] = p;
                    }
                }
            }
            v = S[i + 1];
            Q[S[i + 1]] = -1;
            cout << "d[] = " ;
            for (int j = 0; j < size; j++) {
                cout << d[j] << " " << endl;
            }
            cout << endl;
            cout << "Pre[] = ";
            for (int j = 0; j < size; j++) {
                cout << pre[j] << " " << endl;
            }
            cout << endl;
            cout << "S[] = ";
            for (int j = 0; j < size; j++) {
                if (S[j] == -1) {
                    break;
                }
                cout << S[j] << " " << endl;
            }
            cout << endl;
        }
}