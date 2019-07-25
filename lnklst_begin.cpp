#include <bits/stdc++.h>
using namespace std;
class Node
{
	public:
	int data;
	Node *nxt;
};
void push(Node **head,int data)
{
Node *n=new Node();
n->data=data;
n->nxt=*head;
*head =n;
}
void append(Node **head,int data)
{
	Node *n=new Node();
	n->data=data;
	n->nxt=NULL;
	Node *last=*head;
	if(*head==NULL)
	{
		*head=n;
	}
	while(last->nxt!=NULL)
	{
		last=last->nxt;
		
	}
	last->nxt=n;
}
void print(Node *head)
{
	while(head!=NULL)
	{
		cout<<head->data<<endl;
		head=head->nxt;
	}
}
int main() {
	// your code goes here
	 Node *head=NULL;
	 push(&head,6);
	 push(&head,7);
	 append(&head,8);
	 append(&head,9);
	 print(head);
	return 0;
}
