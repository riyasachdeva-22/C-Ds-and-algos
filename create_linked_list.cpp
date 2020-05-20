#include<iostream>
using namespace std;
class Node
{
public:
int data;
Node *next;
Node(int data)
{
	this->data=data;
	next=NULL;
	}	
};
Node* input()
{
		int d;
	cin>>d;
	Node *head=NULL;
	Node *tail=NULL;
	while(d!=-1)
	{
		Node *n1=new Node(d);
		if(head==NULL)
		{
			head=n1;
			tail=n1;
		}
		else
		{
		tail->next=n1;
		tail=tail->next;
		
		
		}
			cin>>d;
	}
	return head;

}
void print(Node *head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" "<<endl;
		head=head->next;
	}
}
Node *insert(Node *h)
{
	cout<<"Enter value of position";
	int p,d;
	cin>>p>>d;
	Node *temp=h;
	int c=0;
	if(p<0)
	{
	cout<<"no position";
//	break;
}
	Node *n1=new Node(d);
	if(p==0)
	{
		n1->next=h;
		h=n1;
		return h;
	}
	while(temp!=NULL && c<p-1)
	{
		temp=temp->next;
		c++;
	}
	if(temp!=NULL)
	{
		Node *a=temp->next;
		temp->next=n1;
		n1->next=a;
	}
	return h;
}
int  main()
{
Node *h=input();
print(h);
Node *a=insert(h);
print(a);

}
