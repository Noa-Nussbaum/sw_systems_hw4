#include <stdio.h>
#include "graph.h"


int main(){
    pnode n = NULL;
    pnode *head = &n;
    char c;
    while (scanf("%c", &c) != EOF)
    {
        if (c == 'A'){
            build_graph_cmd(head);
        }
        else if (c == 'B'){
            insert_node_cmd(head);
        }
        else if (c == 'D'){
            delete_node_cmd(head);
        }
        else if (c == 'S'){
            int src;
            int dest;
            scanf("%d, %d\n", &src, &dest);
            int shortsPath = shortsPath_cmd(*head, src, dest);
            printf("the shortest path is: %d \n", shortsPath);
        }
        else if (c == 'T'){
            int tsp = TSP_cmd(*head);
            printf("the TSP shortest path is: %d \n", tsp);
        }
    }
    deleteGraph_cmd(head);
    return 0;
}