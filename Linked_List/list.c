#include <stdio.h>
#include <stdlib.h>
#include "./list.h"

int main(){
	
	Node* head=NULL;
	Node* head2=NULL;

	append(&head,1);
	append(&head,2);
	append(&head,4);
	append(&head2,1);
	append(&head2,6);
	append(&head2,7);


	printf("Search 2 number and Insert 5 after\n");

	Insert(Search(head,2),5);// Search 2 number and Insert 5 after

	printNode(head);//Print	

	printf("Insert->7 index-> 3\n");

	Insert_I(&head,7,3);//Insert 7 number in 3 index

	printNode(head);//Print

	printf("Merge\n");

	
	Node* head3=Merge(head,head2);//Merge 2 Lists

	printNode(head3);

	//free 
	free_list(&head3);
	free_list(&head);
	free_list(&head2);

	}
