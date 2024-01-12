#include <stdio.h>
#include <stdlib.h>

#include <queue.h>
#include <list.h>
#include <graph.h>

int
main(int argc, char** argvs)
{
    Graph* graph = graph_init(5);
    
    gaddVertexToList(graph, 0, 3, 4);
    gaddVertexToList(graph, 0, 1, 1);
    gaddVertexToList(graph, 0, 4, 2);

    gaddVertexToList(graph, 1, 2, 4);

    gaddVertexToList(graph, 3, 1, 6);
    gaddVertexToList(graph, 4, 1, 10);
    gaddVertexToList(graph, 2, 4, -1);

    print_graph(graph);

    return 0;
}