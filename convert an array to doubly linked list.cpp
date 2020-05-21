#include<iostream>>
using namespace std;
struct node
{
int data;
node* next;
node* prev;};
struct node* getnode()
{
return new node;

}
 void displaylist(node* start)
 { node* temp=start;
 if(temp==NULL)
 cout<<"nothing";
 else{
 while(start->next != temp)
 {
 cout<<start->data;
 start=start->next;
 }
 cout<<start->data;}

 }

 void createlink(int arr[],int n,node **s)
 {
 node* newnode,*temp;
 int i;
 for(i=0;i<n;i++)
 {
 newnode=getnode();
 newnode->data=arr[i];
 if(i==0)
 {

 *s=newnode;
 newnode->prev=*s;
 newnode->next=*s;
 }
 else
 {
 temp=(*s)->prev;
 temp->next=newnode;
 newnode->next=*s;
 newnode->prev=temp;
 temp=*s;
 temp->prev=newnode;
 }
 }
 }
 int main()
{
	// Array to be converted
	int arr[] = {1,2,3,4,5};
	int n = sizeof(arr) / sizeof(arr[0]);

	// Start Pointer
	struct node *start = NULL;

	// Create the List
	createlink(arr, n, &start);

	// Display the list
	displaylist(start);

	return 0;
}


