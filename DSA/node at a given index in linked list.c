
#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node* next;
};



void insert(struct Node** head, int index)
{


	struct Node* ptr
		= (struct Node*)malloc(sizeof(struct Node));

	ptr->data = index;

	
	ptr->next = (*head);

	
	(*head) = ptr;
}


int GetNth(struct Node* head, int index)
{

	struct Node* cpt = head;

	
	int count = 1;
	while (cpt != NULL) {
		if (count == index)
			return (cpt->data);
		count++;
		cpt = cpt->next;
	}



}


int main()
{

	struct Node* head = NULL;
	
	insert(&head, 1);
	insert(&head, 2);
	insert(&head, 3);
	insert(&head, 4);
	insert(&head, 5);

	
	printf("Element at index 3 is %d", GetNth(head, 3));

}

