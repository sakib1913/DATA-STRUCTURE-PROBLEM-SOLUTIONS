#include<bits/stdc++.h>
using namespace std;
struct node
{
int data;
node* left;
node* right;
};
node* newNode(int data)
{
node* temp=new node;
temp->data=data;
temp->left=NULL;
temp->right=NULL;
return temp;
}
int height(node* root)
{
if(root==NULL)
    return 0;
int l=height(root->left);
int r=height(root->right);
return max(l,r)+1;
}
void levelorder(node* root,int &c,int l)
{
if(root==NULL)
    return;
if(l==1 && root->left && root->right)
{
c++;
}
else if(l>1)
{levelorder(root->left,c,l-1);
levelorder(root->right,c,l-1);}
}
int fun(node* root,int l)
{

int h=height(root);
int c=0;
levelorder(root,c,l);
return c;

}
int main()
{
struct node* root = newNode(7);
    root->left = newNode(5);
    root->right = newNode(6);
    root->left->left = newNode(8);
    root->left->right = newNode(1);
    root->left->left->left = newNode(2);
    root->left->left->right = newNode(11);
    root->right->left = newNode(3);
    root->right->right = newNode(9);
    root->right->right->right = newNode(13);
    root->right->right->left = newNode(10);
    root->right->right->right->left = newNode(4);
    root->right->right->right->right = newNode(12);

    int L = 3;
    cout<<fun(root,L);

}

