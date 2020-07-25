#include<iostream>
using namespace std;
struct node{
int data;
node* left;
node* right;
};
node* newnode(int data)
{
node* temp=new node;
temp->data=data;
temp->right=temp->left=NULL;
return temp;}

void traverse(node* root)
{
if(root!=NULL)
{traverse(root->left);
cout<<root->data<<" ";
traverse(root->right);
}
else
{
root=newnode(-1);
cout<<root->data<<" ";
}
}
int main()
{
node* root=newnode(1);
root->left=newnode(2);
root->right=newnode(3);
root->left->left=newnode(5);
root->right->right=newnode(4);
traverse(root);
}
