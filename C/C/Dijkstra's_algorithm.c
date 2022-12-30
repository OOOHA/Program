#include<stdio.h>
#include<stdlib.h>

#define INF 99999 //I set infinity as 99999
#define MAX 10
 
void dijkstra(int G[MAX][MAX], int n, int startnode);
void printres(int n);
  
int cost[MAX][MAX], distance[MAX], pred[MAX], S[MAX];
int visited[MAX], count = 0, mindistance = 0, nextnode = 0, counts=1;

int main()
{
    int G[MAX][MAX], n, u;
    printf("Enter numbers of vertices:");
    scanf("%d", &n);
    printf("\nEnter the adjacency matrix:\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &G[i][j]);
        }
    }

    printf("\nEnter the starting node:");
    scanf("%d", &u);
    dijkstra(G, n, u);

    system("pause");
    return 0;
}
 
void dijkstra(int G[MAX][MAX], int n, int startnode)
{
    S[0] = startnode;
    for (int i = 0; i < n; i++)
    {
        distance[i] = INF;
    }
    printf("d[]=");
    for (int i = 0; i < n; i++)
    {
        printf(" %d", distance[i]);
    }
    for(int i = 0; i < n; i++)
    {   
        for(int j = 0; j < n; j++)
        {
            if(G[i][j] == 0)
            {
                cost[i][j] = INF;
            }
            else
            {
                cost[i][j] = G[i][j];
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        distance[i] = cost[startnode][i];
        pred[i] = startnode;
        visited[i] = 0;
    }
    distance[startnode] = 0;
    visited[startnode] = 1;
    count = 1;
    printf("\nprev[]=");
    for (int i = 0; i < n; i++)
    {
        printf(" %d",pred[i]);
    }
    printf("\nS[]=\n\n");
    while(count <= n)
    {
        printres(n);
    }
}
void printres(int n)
{
    mindistance = INF;
        
        printf("d[]=");
        for(int i = 0; i < n; i++)
        {
            if(distance[i] < mindistance && !visited[i])
            {
                mindistance = distance[i];
                nextnode = i;
                S[counts] = nextnode;
            }
            printf(" %d", distance[i]);
        }
        printf("\nprev[]=");
        
        visited[nextnode] = 1;
        for(int i = 0; i < n; i++)
        {
            printf(" %d", pred[i]);
            if(!visited[i])
            {
                if(mindistance + cost[nextnode][i] < distance[i])
                {
                    distance[i] = mindistance + cost[nextnode][i];
                    pred[i] = nextnode;
                }
            }
        }
        printf("\nS[]=");
        for (int i=0; i<counts; i++)
        {
            printf(" %d",S[i]);
        }
        printf("\n\n");
        counts++;
        count++;
}