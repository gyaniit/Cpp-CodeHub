//this program uses do while loops during implemntation
//the end of the list points to head rather than NULL
#include <iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
};

Node *head=NULL;

void print_cll(){
	Node *temp=head;
	do{
		cout<<temp->data<<" ";
		temp=temp->next;
	}while(temp!=head);	//do_while used so as to ensure that the test condition doesn't finish at start as temp=head at start
	cout<<endl;
}

void insert_cll(int data, int pos){
	Node *newNode= new Node;
	newNode->data=data;
	if(pos==0 || head==NULL){
		head=newNode;
		newNode->next=head;
		return;
	}
	Node *temp=head;
	Node *ptemp=head;
	int count=1;
	do{
		ptemp=temp;
		temp=temp->next;
		count++;
	}while(count<pos && temp!=head);
	ptemp->next=newNode;
	newNode->next=temp;
}

int main(){
	cout<<"Circular LinkedList Implementation\n\ninserting into CLL\n";
	insert_cll(2,0);
	insert_cll(10,1);
	insert_cll(7,2);
	print_cll();
	cout<<"inserting 9 at 2nd pos\n";
	insert_cll(9,1);
	print_cll();
}
