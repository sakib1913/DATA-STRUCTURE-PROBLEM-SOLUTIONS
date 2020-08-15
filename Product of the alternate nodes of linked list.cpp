#include<bits/stdc++.h>
using namespace std;
struct node
{
int data;
node* next;
};
struct node* head;
void insertt(int data)
{
node* ptr=new node;
node* temp;
ptr->data=data;
if(head==NULL)
{ptr->next=NULL;
head=ptr;
}
else
{
temp=head;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=ptr;
ptr->next=NULL;
}
}
/*void print(node* head)
{
node* temp=head;
while(temp!=NULL)
{
cout<<temp->data<<" ";
temp=temp->next;
}
}*/

void printproduct(node* head)
{
int product=1;
int countt=1;
node* temp=head;
while(temp!=NULL)
{
if(countt==1 || (countt%2==1 && countt!=2))
    {
    product*=temp->data;
    }
countt++;                                               //8 -> 23 -> 11 -> 29 -> 12 */
temp=temp->next;
}
cout<<product;
}
int main()
{
insertt(8);
insertt(23);
insertt(11);
insertt(29);
insertt(12);
//insertt(72);
//cout<<hea1d->next->next->data;
//print(head);
printproduct(head);

return 0;
}
