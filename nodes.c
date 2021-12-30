#include "graph.h"
#include <stdlib.h>
#include <stdio.h>



void insert_node_cmd(pnode *head){
    char data;//array?
    scanf("%s",&data);
    node* new = (node*) malloc(sizeof(node)); //allocate memory
    if(!new) {
        printf("error");
        return;
    }
    new -> node_num = atoi(data); //initiate new node
    new -> next = NULL;
    int i;
    //A4n02533n20411n13702
    //is there an edge?
    pedge first = (pedge)malloc(sizeof(pedge));
    pnode firstNode = (pnode)malloc(sizeof(pnode));

    int nameOfFirst;
    scanf("%d",&nameOfFirst);
    firstNode->node_num=nameOfFirst;
    int weightOfFirst;
    scanf("%d",&weightOfFirst);
    first->weight=weightOfFirst;
    first->endpoint=firstNode;
    
    new->edges=first;

    While(scanf("%d", i)){
        //lets find the new edge endpoint
        int neighborId;
        scanf("%d",&neighborId);
        pnode neighborDest;
        neighborDest->node_num=neighborId;

        //aren't we overrunning the same memory with malloc???
        //make new edge and add node as end point
        edge neighborEdge = (edge)malloc(sizeof(edge));

        //get its weight
        int neighborWeight;
        scanf("%d",&neighborWeight);

        neighborEdge->weight = neighborWeight;
        neighborEdge->endpoint = neighborDest;

        //lets add the edge to the end of the list
        edge *hold;
        hold =  = *first;
        while(hold->next) { //while the next of copy is not null
            hold = hold->next;
        }
        hold -> next= neighborEdge; //add to new edge in the end of the list;
        
    }
    if(!(*head)){ //if the list is empty
        *head=new;
        return;
    }
    node* copy = head;
    while(copy->next) { //while the next of copy is not null
        if(copy->node_num==atoi(data))
            delete_node_cmd(copy);
        else{
            copy = copy->next;
        }
    }
    copy -> next= new; //add new node in the end of the list;
    return;
}



