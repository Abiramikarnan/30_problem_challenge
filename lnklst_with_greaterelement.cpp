#include <iostream>
using namespace std;
class Node
{
	public:
	int data;
	Node *next;
};
void insert(Node **root,int data)
{
	Node *temp,*ptr;
	temp=new Node();
	temp->data=data;
	temp->next=NULL;
	if(*root==NULL)
	{
		*root=temp;
	}
	else
	{
		ptr=*root;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=temp;
	}
}
Node* newlist(Node *root1,Node *root2)
{
	Node *temp,*ptr;
	Node *ptr1=root1;
	Node *ptr2=root2;
	Node *root=NULL;

	while(ptr1!=NULL)
	{
			temp=new Node();
			temp->next=NULL;
		if(ptr1->data>ptr2->data)
		{
			temp->data=ptr1->data;
		}
		else
		{
			temp->data=ptr2->data;
		}
		if(root==NULL)
		{
			root=temp;
		}
		else
		{
			ptr=root;
			while(ptr->next!=NULL)
			{
				ptr=ptr->next;
			}
			ptr->next=temp;
		}
		ptr1=ptr1->next;
		ptr2=ptr2->next;
	}
		return(root);
	
}
void display(Node *root)
{
	while(root!=NULL)
	{
		cout<<root->data<<"->";
		root=root->next;
	}
	cout<<endl;
}
	

int main() {
	// your code goes here
	Node *root1=NULL,*root2=NULL,*root=NULL;
	insert(&root1,5);
	insert(&root1,2);
	insert(&root1,7);
	insert(&root1,3);
	display(root1);
	insert(&root2,1);
	insert(&root2,3);
	insert(&root2,6);
	insert(&root2,5);
	display(root2);
	root=newlist(root1,root2);
	display(root);

	
	
	return 0;
}
