#include<bits/stdc++.h>
using namespace std;
struct node
{
int data;
node* link;
};
struct node*  start=NULL;
void insert_node(int data)
{node*  head;
node* temp;
temp=new node;
temp->data=data;
//cout<<temp->data;
temp->link=NULL;
if(start==NULL)
{
start=temp;
}
else
{
head=start;
while(head->link!=NULL)
{
head=head->link;
}
head->link=temp;
}
while(start!=NULL)
{

cout<<start->data<<" ";
start=start->link;
}
}
int main()
{
insert_node(2);
insert_node(4);
insert_node(6);
insert_node(7);
insert_node(8);
insert_node(9);
insert_node(0);
return 0;
}
