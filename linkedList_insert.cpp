//Linked_list insert
#include <iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
};
void push(Node **head,int data){
	Node *newNode=new Node;
	newNode->data=data;
	newNode->next=NULL;
	if(*head==NULL){
		*head=newNode;
		return;
	}
	Node *temp=*head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=newNode;
}

void print(Node *head){
	Node *tmp=head;
	while(tmp!=NULL){
		cout<<tmp->data<<endl;
		tmp=tmp->next;
	}
}

int main(){
	Node *head=NULL;
	push(&head,2);
	push(&head,5);
	push(&head,3);
	push(&head,1);
	push(&head,9);

	print(head);

	return 0;
}
