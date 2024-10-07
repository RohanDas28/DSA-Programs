#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct node
{
    int vertex;
    struct node *nxt;
}Node;

typedef struct graph
{
    int numVertices, *visited;
    Node **adjLists;
}Graph;

Node *createNode(Node *node, int vertex);
Node *createNode(Node *node, int vertex)
{
    node = (Node *)malloc(sizeof(Node));
    node->vertex = vertex;
    node->nxt = NULL;
    return node;
}
Graph *createGraph(Graph *graph, int vertices);
Graph *createGraph(Graph *graph, int vertices)
{


    
}
void addEdge(Graph *graph, int src, int dest);
void printGraph(Graph *graph);
void DFS(Graph *graph, int vertex);

int main() 
{
    
    return 0;
}