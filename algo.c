#include "graph.h"

void build_graph_cmd(pnode *head){
    deleteGraph_cmd(head);
    int size;
    scanf("%d",&size);
    char n;
    scanf("%c",&n);
    int i;
    //A4n02533n20411n13702
    while(scanf("%d",i)==1){
        insert_node_cmd(head);
    }
    return;
}
