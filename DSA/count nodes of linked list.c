#include <stdio.h>
#include <stdlib.h>

struct node{
 
    int data;
    struct node* next;
};
 
struct node* head;


 
void insert(int data){
 
    
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
 
    ptr->data = data;
    ptr->next = head;
 
    head = ptr;
 
}
 
void print(){
 
    struct node* temp = head;
 
    int count=0;
 
    
 
    while(temp != NULL){
 
       temp = temp->next;
       count++;
 
    }
 
    printf("\n Total no. of nodes is %d",count);
 
}
 
main(){
 
    head = NULL;
 
    insert(2);
    insert(4);
    insert(5);
	insert(3);
	insert(9);
	
    
    print();
 
}
