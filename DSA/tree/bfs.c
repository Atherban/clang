// Implementation of BFS using Queue
#include <stdio.h>
#define SIZE 10
int queue[SIZE];
int rear = -1, front = 0;

void insert(int x)
{
    queue[++rear] = x;
}

int delete()
{
    return queue[front++];
}

int isEmpty()
{
    return front > rear;
}

#define V 5
int adj[V][V] = {
    {0, 1, 1, 0, 0},
    {1, 0, 1, 1, 0},
    {1, 1, 0, 1, 1},
    {0, 1, 1, 0, 1},
    {0, 0, 1, 1, 0}};

void bfs(int start)
{
    int visited[V] = {0};
    insert(start);
    visited[start] = 1;
    while (!isEmpty())
    {
        int node = delete();
        printf("%d ", node);
        for (int i = 0; i < V; i++)
        {
            if (adj[node][i] && !visited[i])
            {
                insert(i);
                visited[i] = 1;
            }
        }
    }
    printf("\n");
}

int main()
{
    printf("BFS traversal starting from node 0: ");
    bfs(0);
    return 0;
}