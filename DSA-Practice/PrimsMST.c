#include <stdio.h>

#define INF 999
#define MAX 10

int main() {
    int n, i, j;
    int cost[MAX][MAX];
    int visited[MAX] = {0};
    int minCost = 0;
    int edgeCount = 1;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter cost adjacency matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &cost[i][j]);
            if (cost[i][j] == 0)
                cost[i][j] = INF;
        }
    }

    // Start from vertex 0
    visited[0] = 1;

    printf("\nEdges in Minimum Spanning Tree:\n");

    while (edgeCount < n) {
        int min = INF, a = -1, b = -1;

        for (i = 0; i < n; i++) {
            if (visited[i]) {
                for (j = 0; j < n; j++) {
                    if (!visited[j] && cost[i][j] < min) {
                        min = cost[i][j];
                        a = i;
                        b = j;
                    }
                }
            }
        }

        printf("%d -- %d = %d\n", a, b, min);
        minCost += min;
        visited[b] = 1;
        edgeCount++;
    }

    printf("\nMinimum Cost of MST = %d\n", minCost);

    return 0;
}
