#include<bits/stdc++.h>
using namespace std;
struct node
{int data;
node* left;
node* right;
};
node* newnode(int data)
{
node* temp=new node;
temp->data=data;
temp->left=NULL;
temp->right=NULL;
return temp;
}
node* insert(node* root,int data)
{
if(root==NULL)
    {
    return newnode(data);
    }
else
{
if(root->data>data)
{
root->left=insert(root->left,data);
}
if(root->data<data)
{
root->right=insert(root->right,data);
}
return root;
}
}
void inorder(node* root)
{
if(root==NULL)
    return;
else
{
inorder(root->left);
cout<<root->data;
inorder(root->right);
}
}
int main()
{
int arr[]={1,3,5,5,6,7,8};
int n=sizeof(arr)/sizeof(arr[0]);
node* root=NULL;
for(int i=0;i<n;i++)
{
root=insert(root,arr[i]);
}
inorder(root);
return 0;
}
