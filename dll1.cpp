#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *next;
	struct node *prev;
};
int main()
{
	int n,i=1,element;
	struct node *temp,*p,*start,*new_node,*store;
	cout<<"enter the no of nodes";
	cin>>n;
	cout<<"enter the data at node no "<<i;
	cin>>element;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=element;
	temp->next=NULL;
	temp->prev=NULL;
	p=temp;
	start=temp;
	for(i=2;i<=n;i++)
	{
		cout<<"enter the data at node no "<<i;
		cin>>element;
		temp=(struct node *)malloc(sizeof(struct node));
		temp->data=element;
		temp->next=NULL;
		temp->prev=p;	
		p->next=temp;
		
		p=p->next;
		
	}

	new_node=(struct node *)malloc(sizeof(struct node));
	new_node->data=7;
	new_node->next=start;
	new_node->prev=NULL;
	start->prev=new_node;
	start=new_node;
	for(temp=start;temp!=NULL;temp=temp->next)
	{
		cout<<temp->data;
	}
	return 0;
}
