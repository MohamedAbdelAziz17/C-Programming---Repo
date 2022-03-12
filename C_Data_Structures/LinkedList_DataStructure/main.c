#include <stdio.h>
#include <stdlib.h>

//block or node
struct node{
    int data;    // the data
    struct node* ptr_to_next; // pointer of node...(struct node*) is a datatype of the pointer struct

};
typedef struct node node_t; // using node_t as a datatype


void print_linkedlist(node_t *head){
node_t* temporary = head; // temporary pointer to move from head through each pointer inside the nodes(structures)

while(temporary!=NULL){
    printf("%d --> ",temporary->data);
    temporary=temporary->ptr_to_next;
}
printf("NULL");

}

int main()
{
    node_t n1,n2,n3,n4,n5;
    node_t *head; // the structure node_t head


    n1.data=45;
    n2.data=8;
    n3.data=32;
    n4.data=50;
    n5.data=70;

    head=&n1; // n1 is the head
    n1.ptr_to_next=&n2;
    n2.ptr_to_next=&n3;
    n3.ptr_to_next=&n4;
    n4.ptr_to_next=&n5;
    n5.ptr_to_next=NULL;

   print_linkedlist(head);




    return 0;
}
