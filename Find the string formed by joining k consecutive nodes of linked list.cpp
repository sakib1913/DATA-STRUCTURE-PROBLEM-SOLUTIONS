#include<iostream>
using namespace std;
struct node{
int data;
node* next;
};
node * newnode(int data)
{
node * temp=new node;
temp->data=data;
temp->next=NULL;
return temp;
}
string print(int k,node* root){
string f="";
string s="";
int cnt=0;
while(root){
if(cnt==k)
{
f=f+" ";
f=f+s;
s="";
cnt=0;
}
s=s+string(1,root->data);
cnt++;
root=root->next;
}
f=f+" ";
f=f+s;
return f;
}
int main(){
node * root=newnode('a');
root->next=newnode('b');
root->next->next=newnode('c');
root->next->next->next=newnode('d');
int k=2;
cout<<print(k,root);
}
