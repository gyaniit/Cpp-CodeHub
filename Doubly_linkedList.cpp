#include <iostream>
using namespace std;

struct Node{
	int data;
	Node *prev;
	Node *next;
};

Node *head=NULL;

void print_dll(){
	Node *temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

void insert_dll(int data, int pos){
	Node *newNode = new Node;
	newNode->data=data;
	if(head==NULL){	//case when dll is empty
		head=newNode;
		newNode->next=NULL;
		newNode->prev=NULL;
		return;
	}
	if(pos==0){	//case when insertion is at begining
		newNode->next=head->next;
		newNode->prev=NULL;
		head=newNode;
		return;
	}
	Node *temp=head;
	int count=1;
	while(temp->next!=NULL && count<=pos){
		temp=temp->next;
		count++;
	}
	if(temp->next==NULL){ //case when insertion is at end
		temp->next=newNode;
		newNode->prev=temp;
		newNode->next=NULL;
	}
	else{
		newNode->prev=temp->prev; //case when insertion is in middle
		temp->prev->next=newNode;
		newNode->next=temp;
		temp->prev=newNode;
	}


}

void remove_dll(int pos){
	int count=1;
	Node *temp=head;
	while(count<=pos){
		temp=temp->next;
		count++;
	}
	temp->prev->next=temp->next;
	temp->next->prev=temp->prev;
	delete(temp);
}

int main(){
	cout<<"Doubly LinkedList Implementation\n\nInserting elements into list \n";
	insert_dll(2,0);
	insert_dll(4,1);
	insert_dll(9,2);
	print_dll();
	cout<<"Inserting 3 at 2nd position \n";
	insert_dll(3,1);
	print_dll();
	cout<<"Removing 3rd element\n";
	remove_dll(2);
	print_dll();
}
