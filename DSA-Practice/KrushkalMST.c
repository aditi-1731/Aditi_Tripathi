#include <stdio.h>
#include <stdlib.h>

#define MAX 20

// Structure to represent an edge
struct edge {
    int u, v, w;
};

struct edge edges[MAX];
int parent[MAX];
int n, e;

// Find parent (Disjoint Set – Find)
int find(int i) {
    while (parent[i] != i)
        i = parent[i];
    return i;
}

// Union of two sets
void unionSet(int a, int b) {
    parent[a] = b;
}

// Sort edges based on weight (Bubble Sort – exam friendly)
void sortEdges() {
    struct edge temp;
    for (int i = 0; i < e - 1; i++) {
        for (int j = 0; j < e - i - 1; j++) {
            if (edges[j].w > edges[j + 1].w) {
                temp = edges[j];
                edges[j] = edges[j + 1];
                edges[j + 1] = temp;
            }
        }
    }
}

int main() {
    int i, a, b;
    int minCost = 0;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter number of edges: ");
    scanf("%d", &e);

    printf("Enter edges (u v weight):\n");
    for (i = 0; i < e; i++) {
        scanf("%d %d %d", &edges[i].u, &edges[i].v, &edges[i].w);
    }

    // Initialize parent
    for (i = 0; i < n; i++)
        parent[i] = i;

    // Sort edges
    sortEdges();

    printf("\nEdges in Minimum Spanning Tree:\n");

    for (i = 0; i < e; i++) {
        a = find(edges[i].u);
        b = find(edges[i].v);

        if (a != b) {
            printf("%d -- %d = %d\n", edges[i].u, edges[i].v, edges[i].w);
            minCost += edges[i].w;
            unionSet(a, b);
        }
    }

    printf("\nMinimum Cost of MST = %d\n", minCost);

    return 0;
}
