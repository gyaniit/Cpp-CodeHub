//Merge_sort_LinkedList
#include <iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
};

void print(Node *head){
	Node *temp=head;
	cout<<endl;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

Node *merger(Node *head1,Node *head2){
	Node *head=head1;
	Node*temp,*ptemp=NULL;//ptemp maintains a pointer to previous element of linked list, whose next has to be updated when element inserted
	while(head1!=NULL && head2!=NULL){
		if(head1->data<head2->data){
			ptemp=head1;
			head1=head1->next;
		}
		else{
			temp=head1;
			head1=head2;
			head2=head2->next;
			head1->next=temp;

			if(ptemp==NULL)
				head=head1;//updates head incase insertion at start node
			else
				ptemp->next=head1;//updates previous node in case of insertion in middle
			ptemp=head1;
			head1=head1->next;
		}
	}
	if(head2!=NULL)
		ptemp->next=head2;

	//print(head);
	return head;
}

Node *mergeSort(Node *head, int n){
	if(n<=1) return head;
	Node *head1,*head2, *temp;
	head2=head;
	for(int i=0;i<n/2;i++){
		temp=head2;
		head2=head2->next;
	}
	temp->next=NULL;
	//cout<<head->data<<"|";
	//cout<<head2->data<<"\n";
	head1=mergeSort(head,n/2);
	head2=mergeSort(head2,n-n/2);
	//cout<<head1->data<<"||";
	//cout<<head2->data<<"\n";
	head=merger(head1,head2);
	//cout<<head->data<<endl;
	print(head);
	return head;
}



int main(){
	Node *head=NULL;
	Node *temp;
	//head=temp;
	//Node * temp=new Node();
	int A[5]={1,9,2,5,4};
	for(int i=0;i<5;i++){
		Node *temp2=new Node;
		temp2->data=A[i];
		temp2->next=NULL;
		if(head==NULL){
			head=temp2;
		}
		else{
			temp=head;
			head=temp2;
			head->next=temp;
		}
	}
	print(head);
	head=mergeSort(head,5);
	print(head);
}
