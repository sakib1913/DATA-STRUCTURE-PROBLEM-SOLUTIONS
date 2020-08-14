#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
node* next;
};
node* getnode(node * head,int data)
{
node* temp=new node;
temp->data=data;
temp->next=head;
return temp;
}
void display(node *head)
{int k=3;
int sum=0;
int product=1;
node * temp=head;
do
{
if(temp->data%k==0){
sum+=temp->data;
product*=temp->data;
}
temp=temp->next;
}while(temp!=head);
cout<<sum<<" is sum";
cout<<"\n"<<product<<" is product";
}
int main()
{node* head=NULL;
head=getnode(head,3);
head->next=getnode(head,4);
head->next->next=getnode(head,9);
/*cout<<head->data;
cout<<head->next->data;
cout<<head->next->next->data;
*/
display(head);
}
