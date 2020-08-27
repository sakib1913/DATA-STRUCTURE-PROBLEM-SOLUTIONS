#include<bits/stdc++.h>
using namespace std;
struct node
{
char data;
node* next;
};
node* ins(char data)
{
node* temp=new node;
temp->data=data;
temp->next=NULL;
return temp;
}
bool isspecial(char data)
{

if(data>='A' && data<='Z')
    return false;
if(data>='a' && data<='z')
    return false;
if(data>='0' && data <='9')
    return false;
return true;
}
node* removee(node* head)
{
node* cur=head;
node* prev=head;
while(cur!=NULL && isspecial(cur->data))
{
node* temp=cur;
head=cur->next;
cur=cur->next;
delete(temp);
}
prev = head;
while(cur!=NULL)
{
while(cur!=NULL && isspecial(cur->data))
{
node* temp=cur;
prev->next=cur->next;
cur=cur->next;
delete(temp);
}
if(cur==NULL)
    break;
prev=cur;
cur=cur->next;
}
return head;
}
int main()
{
node* head=NULL;
head=ins('s');
head->next=ins('h');
head->next->next=ins('*');
head->next->next->next=ins('t');
head=removee(head);
while(head!=NULL)
{cout<<head->data<<" ";
head=head->next;
}
return 0;
}
