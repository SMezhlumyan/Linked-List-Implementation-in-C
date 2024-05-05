#include <stdio.h>
#include <stdlib.h>
#include "./list.h"
Node* create_node(int nval){
	Node* newNode = (Node *)malloc(sizeof(Node));
	if(newNode == NULL){
		return NULL;
	}
	newNode->val = nval;
	newNode->next = NULL;
	return newNode;
}

void append(Node** head, int nval){
	if(*head){

		Node* tmp=*head;
		while(tmp->next!= NULL){
			tmp = tmp->next;
		}
		tmp->next = create_node(nval);
	}
	else{
		*head = create_node(nval);
		return;
	}
}
void printNode(Node* head){

	while(head){
		printf("%d -> ",head->val);
		head=head->next;	
	}
	printf("\n");

}

void free_list(Node** head){
	while(*head){	   
		Node* temp = (*head)->next;
		free(*head);
		*head = temp;	
	}		
}
Node* Search(Node* head,int sval){
	while(head){
		if((head->val)==sval){
			return head;
		}	
         head=head->next;    
   }

}

void Insert(Node* node,int val){
	if(node==NULL){
		return;
	}
	Node* tmp=node->next;

	Node* new_node=create_node(val);

	node->next=new_node;


	new_node->next=tmp;
}




void Insert_I(Node** head,int val,int index){
	if(*head==NULL){
		return;
	}	

	Node* tmp=*head;
	Node* new_node=create_node(val);
	
	while(index-1 && tmp!=NULL){
		index--;
		tmp=tmp->next;
	}
	Insert(tmp,val);
	
}


Node* Merge(Node* head1,Node* head2){
	Node* node=NULL;
	 if(!head1 ||!head2){
        return node;
    }
	if((head1->val)>(head2->val)){
		node=create_node(head2->val);
		head2=head2->next;
	}
	else{
		node=create_node(head1->val);
		head1=head1->next;
	}
		Node* tmp=node;
	while(head1 || head2){
		if (head1&&!head2){
   			 node->next =create_node(head1->val);
			head1=head1->next;
			node=node->next;
			continue;
		}
	if (!head1&&head2){
	    node->next = create_node(head2->val);
		head2=head2->next;
		node=node->next;

		continue;
	}
		if((head1->val)>(head2->val)||head1==NULL){
			node->next=create_node(head2->val);
			head2=head2->next;
			node=node->next;
		}else {
			node->next=create_node(head1->val);
			head1=head1->next;
			node=node->next;
		}
		
	}
	if (head1)
        node->next =create_node(head1->val);

    if (head2)
        node->next = create_node(head2->val);
		
	return tmp;
}

