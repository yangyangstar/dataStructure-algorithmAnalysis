#include "adjTable.h"

#define Error(str) printf("\n\t %s \n", str)
#define Vertex int

void dfs(Vertex vertex, int);
void dfsPathSet(Vertex vertex, int depth);

AdjTable* adj;		  
int *visited;
int size;
int counter;
int *vertexIndex; // recording traversal sequence for the vertexes
int *vertexLow; // recording low value of vertex
int *parent; // recoding the parent of the vertex 
Vertex start; 
