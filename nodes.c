#include "graph.h"
#include <stdlib.h>
#include <stdio.h>

void insert_node_cmd(pnode *head){
    int size =0;
    char data;
    scanf("%s",data);
    node* new = (node*) malloc(sizeof(node)); //allocate memory
    if(!new) {
        printf("error");
        return;
    }
    new -> node_num = atoi(data); //initiate new node
    new -> next = NULL;
    int i;
    While (scanf("%d", i)){

    }
    if(!(*head)){ //if the list is empty
        *head=new;
        return;
    }
    node* copy = *head;
    while(copy->next) { //while the next of copy is not null
        if(copy->node_num==atoi(data))
            delete_node_cmd(copy);
        else{
            copy = copy->next;
        }
    }
    copy -> next= new; //add to new in the end list;
}



