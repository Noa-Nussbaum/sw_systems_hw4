#include <stdio.h>
#include "graph.h"

#define TXT 1024


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

