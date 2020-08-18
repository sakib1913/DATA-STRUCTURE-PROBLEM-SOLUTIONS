#include<bits/stdc++.h>
using namespace std;
struct node
{
int data;
node*left;
node* right;
};
void inorder(node* root);
node* root;
node* insert(char data)
{
node* temp=new node;
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
void preorder(node* root)
{
if(root)
{
cout<<root->data<<" ";
inorder(root->left);
inorder(root->right);
}
}
void inorder(node* root)
{
if(root)
{
preorder(root->left);
cout<<root->data<<" ";
preorder(root->right);
}
}
int main()
{
root=insert('a');
root->left=insert('b');
root->right=insert('c');
root->left->left=insert('e');
root->left->right=insert('x');
root->right->left=insert('y');
root->right->right=insert('g');
inorder(root);
}
