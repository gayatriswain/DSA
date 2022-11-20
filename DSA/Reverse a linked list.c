#include <stdio.h>
#include <stdlib.h>
struct Node {
   int data;
   struct Node* next;
}; struct Node*head;
Node* insert(int n) {
   Node* temp = (struct Node*)malloc(sizeof(struct Node));
   temp->data = n;
   temp->next = head;
   head=temp;
   
}
void Reverse()
{
    struct Node *prevNode, *curNode;

    if(head != NULL)
    {
        prevNode = head;
        curNode = head->next;
        head = head->next;

        prevNode->next = NULL; 

        while(head != NULL)
        {
            head = head->next;
            curNode->next = prevNode;

            prevNode = curNode;
            curNode = head;
        }

        head = prevNode; 

        printf("\n");
    }
}
void print(Node* head){
   while (head != NULL) {
      printf("%d ", head->data);
      head = head->next;
   }
   printf("\n");
}
int main(){
    head = NULL;
   insert(1); 
   insert(2);
   insert(3);
   insert(4);
   insert(5);
   printf("Linked list : \t");
   print(head);
   Reverse();
   printf("Reversed linked list : \t");
   print(head);
   return 0;
}
