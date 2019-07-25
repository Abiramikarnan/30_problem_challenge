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
Node *abi=new Node();
abi->data=data;
abi->nxt=*head;
*head =abi;
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
	 print(head);
	return 0;
}
