#include<iostream>
using namespace std;

class Node{
public:
	int data;
	Node* prev;
	Node* next;

	//constructor
	Node(int d){
		this->data=d;
		this->prev=NULL;
		this->next=NULL;
	}
};

void print(Node* &head){
	Node* temp =head;

	while(temp!=NULL){
		cout<<temp ->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

int main(){
	Node* node1=new Node(10);
	cout<< node1 -> data<<endl;
	cout<< node1 -> next<<endl;
	cout<< node1 -> prev<<endl;
	return 0;
}