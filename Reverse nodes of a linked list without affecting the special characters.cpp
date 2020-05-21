#include<iostream>
using namespace std;
struct node
{
char data;
node* next;};



void reversee(node** head,int sizee)
{
int arr[sizee];
int i=0;
node* current=*head;
while(current!=NULL){
if((current->data<=122 && current->data>=97) ||current->data>=65 && current->data<=90)
{
arr[i]=current->data;
i++;
current=current->next;
}
else{
current=current->next;
}
}
current=*head;
while(current!=NULL)
{
if((current->data<=122 && current->data>=97) ||current->data>=65 && current->data<=90)
{
current->data=arr[--i];
current=current->next;

}
else{
current=current->next;
}
}
}
void push(node** head,char dataa)
{
node* newnode=new node;
newnode->data=dataa;
newnode->next=(*head);
(*head)=newnode;
}

void print(node* head)
{
node* tp=head;
while(tp!=NULL)
{
cout<<tp->data;
tp=tp->next;
}}
int main()
{node* head=NULL;
  push(&head, 's');
	push(&head, '$');
	push(&head, 'k');
	push(&head, 'e');
	push(&head, 'e');
	push(&head, '@');
	push(&head, '#');
	push(&head, 'g');
	push(&head, 'r');
	push(&head, 'o');
	push(&head, 'f');
	push(&head, 's');
	push(&head, '$');
	push(&head, 'k');
	push(&head, 'e');
	push(&head, 'e');
	push(&head, 'g');

   print(head);
   reversee(&head,13);
   cout<<"\n";
   print(head);
   return 0;
}
