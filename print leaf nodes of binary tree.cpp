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
return temp;
}
void printleaf(node* root)
{
if(root==NULL)
return;
if(root->left==NULL && root->right==NULL)
cout<<root->data<<endl;
if(root->left!=NULL)
printleaf(root->left);
if(root->right!=NULL)
printleaf(root->right);
}
int main()
{
node* root=newnode(2);
root->left=newnode(3);
root->right=newnode(4);
root->right->left=newnode(5);
root->right->right=newnode(7);
cout<<"leaf nodes are:\n";
printleaf(root);
}
