#include <stdio.h>
#include <stdlib.h>

#define V 4   // Number of vertices

/* ---------- ADJACENCY LIST ---------- */
struct node {
    int vertex;
    struct node* next;
};

struct node* adjList[V];

// Create new node
struct node* createNode(int v) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->vertex = v;
    newNode->next = NULL;
    return newNode;
}

// Add edge to adjacency list (undirected)
void addEdgeList(int src, int dest) {
    struct node* newNode = createNode(dest);
    newNode->next = adjList[src];
    adjList[src] = newNode;

    newNode = createNode(src);
    newNode->next = adjList[dest];
    adjList[dest] = newNode;
}

// Display adjacency list
void displayAdjList() {
    printf("\nAdjacency List Representation:\n");
    for (int i = 0; i < V; i++) {
        struct node* temp = adjList[i];
        printf("Vertex %d: ", i);
        while (temp) {
            printf("%d -> ", temp->vertex);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

/* ---------- ADJACENCY MATRIX ---------- */
void displayAdjMatrix(int matrix[V][V]) {
    printf("\nAdjacency Matrix Representation:\n");
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int adjMatrix[V][V] = {0};

    // Initialize adjacency list
    for (int i = 0; i < V; i++)
        adjList[i] = NULL;

    // Add edges
    int edges[][2] = {
        {0, 1},
        {0, 2},
        {1, 2},
        {1, 3},
        {2, 3}
    };

    int numEdges = 5;

    for (int i = 0; i < numEdges; i++) {
        int src = edges[i][0];
        int dest = edges[i][1];

        // Matrix
        adjMatrix[src][dest] = 1;
        adjMatrix[dest][src] = 1;

        // List
        addEdgeList(src, dest);
    }

    // Display outputs
    displayAdjMatrix(adjMatrix);
    displayAdjList();

    return 0;
}