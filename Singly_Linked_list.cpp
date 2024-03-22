#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node* next;

	//constructor
	Node(int data){
		this ->data=data;
		this ->next=NULL;
	}

	//destructor
	~Node(){
		int value=this->data;

		//memory free
		if(this->next !=NULL){
			delete next;
			this->next=NULL;
		}
		cout<<"Memory is free for node with data"<<value<<endl;
	}
};

//Insertion
void InsertAtHead(Node* &head, int d){
	//new node create
	Node* temp=new Node(d);
	temp ->next=head ;
	head =temp;
}

void InsertAtTail(Node* &tail, int d){
	//new node create
	Node* temp=new Node(d);
	tail->next =temp;
	tail=temp;
}

void InsertAtPosition(Node* &head,Node* &tail,int position,int d){

	if(position==1){
		InsertAtHead(head,d);
		return;
	}

	Node* temp=head;
	int count=1;
	while(count<position-1){
		temp=temp->next;
		count++;
	}

	//inserting at last position
	if(temp ->next==NULL){
		InsertAtTail(tail,d);
		return;
	}

	//creating a node for d
	Node* nodeToInsert =new Node(d);
	nodeToInsert->next=temp->next;
	temp->next=nodeToInsert;

}

//Deletion

void deleteNode(int position,Node* &head,Node* &tail){
	//deleting first or start node
	if(position==1){
		Node* temp=head;
		head=head->next;
		//memory free
		temp->next=NULL;
		delete temp;
	}
	else{
		//deleting middle or last node

		Node* curr=head;
		Node* prev=NULL;

		int count=1;
		while(count<position){
			prev=curr;
			curr=curr->next;
			count++;
		}
		prev->next=curr->next;
		curr->next=NULL;
		delete curr;
		tail=prev;
	}
}

//Print traverse

void print(Node* &head){
	Node* temp =head;

	while(temp!=NULL){
		cout<<temp ->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

int main(){

	//created a new node
	Node* node1 =new Node(10);
	// cout<< node1 -> data<<endl;
	// cout<< node1 -> next<<endl;

	//head pointed to node1
	Node* head =node1;
	Node* tail =node1;
	print(head);


	// InsertAtHead(head,12);
	// print(head);

	// InsertAtHead(head,15);
	// print(head);

	InsertAtTail(tail,12);
	print(head);

	InsertAtTail(tail,15);
	print(head);

	InsertAtPosition(head,tail,3,22);
	print(head);
	print (tail);

	deleteNode(1,head,tail);
	print(head);
	print (tail);


	deleteNode(3,head,tail);
	print(head);
	print (tail);

	return 0;
}