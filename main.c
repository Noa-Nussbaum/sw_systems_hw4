#include <stdio.h>
#include "graph.h"

#define TXT 1024

void printGraph_cmd(pnode head){
    if(!head){
        prinf("No graph to print");
        return;
    }
    pnode copy = head;
    while(copy->next){
        printf("Node ID: %d\n",copy->node_num);
        pedge copyEdge = copy->edges;
        while(copyEdge->next){
            printf("Node edges: Edge endpoint: %d, Edge weight: %d",copy->edges->endpoint,copy->edges->weight);
            copyEdge=copyEdge->next;
        }
        copy = copy->next;
    }
}


int main(){

    char c;
    pnode t = NULL;
    pnode *head = &t;
// to get the txt
    scanf("%c",&c);
    if(c=='A'){
        build_graph_cmd(head);
    }
    
    
         


}

