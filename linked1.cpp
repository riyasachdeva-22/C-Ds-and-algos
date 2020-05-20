#include<stdio.h>
#include<stdlib.h>
struct node
{
	int d;
	struct node *next;
};
		void insert_at_front()
		{
				
		}
			
	void create_list()
	{
		struct node *h=0;
		struct node *temp;
		int ch;
		while(ch)
		{
		struct node *n=(struct node*)malloc(sizeof(struct node));
		printf("enter data");
		scanf("%d",n->d);
		n->next=0;
		if(h==0)
		{
		h=n=temp;}
		else
		{
			temp->next=n;
			temp=n;
		}
		printf("do u want");
		scanf("%d",&ch);
	}
	temp=h;
	while(temp!=0)
	{
		printf("%d",temp->d);
		temp=temp->next;
	}
	
	}
int main()
{
	create_list();
	insert_at_front();
}
