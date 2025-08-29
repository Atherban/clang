// Topological Sort
#include <stdio.h>
#define max 100
int adj[max][max];
int indegree[max];
int queue[max];
int r = -1, f = 0;

void topological_sort(int v)
{
    int i, j, count = 0;
    int topo_order[max];

    for (i = 0; i < v; i++)
    {
        if (indegree[i] == 0)
            queue[++r] = i;
    }
    while (f <= r)
    {
        int node = queue[f++];
        topo_order[count++] = node;
        for (j = 0; j < v; j++)
        {
            if (adj[node][j])
            {
                indegree[j]--;
                if (indegree[j] == 0)
                    queue[++r] = j;
            }
        }
    }
    if (count != v)
    {
        printf("Graph has a cycle!\n");
        return;
    }
    printf("Topological Order: ");
    for (i = 0; i < v; i++)
        printf("%d ", topo_order[i]);
    printf("\n");
}

int main()
{
    int v, e, i, j, src, dest;
    printf("Enter number of vertices: ");
    scanf("%d", &v);
    printf("Enter number of edges: ");
    scanf("%d", &e);

    for (i = 0; i < v; i++)
    {
        indegree[i] = 0;
        for (j = 0; j < v; j++)
            adj[i][j] = 0;
    }
    printf("Enter edges (src dest):\n");
    for (i = 0; i < e; i++)
    {
        scanf("%d %d", &src, &dest);
        adj[src][dest] = 1;
        indegree[dest]++;
    }
    topological_sort(v);
    return 0;
}