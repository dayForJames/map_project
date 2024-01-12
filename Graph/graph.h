#pragma once 

#include <stdlib.h>
#include <list.h>


typedef struct Graph
{
    List** adjacency_list;
    int vertex_num;
} Graph;


Graph* graph_init(int vertex_num);
void gaddVertexToList(Graph* graph, int in_vertex, int out_vertex, int value);
void print_graph(Graph* graph);