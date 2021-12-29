#include "graph.h"

void build_graph_cmd(pnode *head){
    int size;
    scanf("%d",&size);
    char n;
    scanf("%c",&n);
    int i;
    while(scanf("%d",i)==1){
        insert_node_cmd(head);
    }
    return;
}
