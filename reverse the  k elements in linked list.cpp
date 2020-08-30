#include<bits/stdc++.h>
using namespace std;
struct node
{
int data;
node* link;
};
node* head=NULL;
queue<int> q;
node* insertt(int data)
{
node* temp=new node;
temp->data=data;
if(head==NULL)
{
head=temp;
}
else
{

temp->link=head;
head=temp;
}
}
node* reversee(node* head,int k)
{
while(k--)
{node* temp=head;
int p=head->data;
q.push(p);
head=head->link;
delete temp;
}
return head;
}
int main()
{insertt(10);insertt(9);
insertt(8);insertt(7);
insertt(6);insertt(5);
insertt(4);insertt(3);
insertt(2);insertt(1);
int k=3;
head=reversee(head,k);
while(!q.empty())
{
int i=q.front();
insertt(i);
q.pop();
}
while(head!=NULL)
{
cout<<head->data;
head=head->link;}
return 0;}

