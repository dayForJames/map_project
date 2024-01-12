#include <graph.h>

Graph* 
graph_init(int vertex_num)
{
    Graph* graph = (Graph*)malloc(sizeof(Graph));
    graph->adjacency_list = (List**)malloc(sizeof(List*) * vertex_num);
    graph->vertex_num = vertex_num;

    for (int i = 0; i < vertex_num; i++)
    {
        graph->adjacency_list[i] = (List*)malloc(sizeof(List));
        graph->adjacency_list[i]->head = NULL;
        graph->adjacency_list[i]->size = 0;
    }

    return graph;
}

void
gaddVertexToList(Graph* graph, int in_vertex, int out_vertex, int value)
{
    graph->adjacency_list[in_vertex]->head = ladd(graph->adjacency_list[in_vertex]->head, value, out_vertex, &graph->adjacency_list[in_vertex]->size);
}

void 
print_graph(Graph* graph)
{
    for (int i = 0; i < graph->vertex_num; i++)
    {
        print_list(graph->adjacency_list[i]->head);
    }
}