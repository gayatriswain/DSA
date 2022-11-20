#include<stdio.h>  
#include<stdlib.h>  
void insert(int);  
void deleteNode();  
struct node  
{  
    int data;  
    struct node *next;  
    struct node *prev;  
};  
struct node *head;  

void insert(int data){
 
    
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
 
    ptr->data = data;
    ptr->next = head;
 
    head = ptr;
 
}
 
void print(){
 
    struct node* temp = head;
     
    while(temp != NULL){
 
       temp = temp->next;
       printf("%d",temp->data);
 
    }
 
    
 
}
 

void deleteNode( )  
{  
    struct node *ptr, *temp;   
    int val;   
    printf("Enter the value");  
    scanf("%d",&val);  
    temp = head;  
    while(temp -> data != val)  
    temp = temp -> next;  
    if(temp -> next == NULL)  
    {  
        printf("\nCan't delete\n");  
    }  
    else if(temp -> next -> next == NULL)  
    {  
        temp ->next = NULL;  
        printf("\nNode Deleted\n");  
    }  
    else  
    {   
        ptr = temp -> next;  
        temp -> next = ptr -> next;  
        ptr -> next -> prev = temp;  
        free(ptr);  
        printf("\nNode Deleted\n");  
    }     
}

  main(){
 
    head = NULL;
 
    insert(1);
    insert(2);
    insert(3);
	insert(4);
	insert(5);
	
    print();
    
    deleteNode();
    
    print();
 
}
