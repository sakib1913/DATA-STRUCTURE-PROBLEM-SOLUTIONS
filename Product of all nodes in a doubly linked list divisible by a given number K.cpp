#include<bits/stdc++.h>
using namespace std;
struct node
{
int data;
node* next;
node* prev;
};
struct node* head;
void insertt(int data)
{
node* temp=new node;
node* ptr;
temp->data=data;
if(head==NULL)
{
head=temp;
temp->prev=NULL;
temp->next=NULL;
}
else
{ptr=head;
while(ptr->next!=NULL)
{
ptr=ptr->next;
}
ptr->next=temp;
temp->prev=ptr;
temp->next=NULL;
}
}

void print(int k)
{
int pro=1;
node* ptr=head;
while(ptr!=NULL)
{
if(ptr->data%k==0)
{
pro*=ptr->data;
}
ptr=ptr->next;
}
cout<<pro<<endl;
}

int main()
{insertt(4);
insertt(7);
insertt(8);
insertt(2);
insertt(3);
insertt(1);
insertt(4);
///cout<<head->next->next->next->data;
int k;
cout<<"enter k\n";
cin>>k;
print(k);
}
