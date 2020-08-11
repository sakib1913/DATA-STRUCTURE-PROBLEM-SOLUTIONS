#include<bits/stdc++.h>
using namespace std;
struct node
{
int data;
node* left;
node* right;
};
struct node* getnode(int x)
{
node* temp=new node;
temp->data =x;
temp->left = temp->right = NULL;
return temp;
}
int maxx(node* root)
{

int maxxx=0;
if(root==NULL)
return -1;
if(root->right!=NULL)
maxxx=root->right->data;
return max({maxx(root->right),maxxx,maxx(root->left)});
}
int main()
{
    node* root=getnode(7);
    root->left = getnode(6);
    root->right = getnode(5);
    root->left->left = getnode(4);
    root->left->right = getnode(3);
    root->right->left = getnode(2);
    root->right->right = getnode(1);
cout<<maxx(root);
}
