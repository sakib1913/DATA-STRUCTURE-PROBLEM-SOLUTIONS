#include<bits/stdc++.h>
using namespace std;
struct node{
float data;
node* left;
node* right;
};
node* getnode(float data)
{
node* temp=new node;
temp->data=data;
temp->left=temp->right=NULL;
return temp;
}
float findmax(node* root)
{
if(root==NULL)
    return INT_MIN;
float res=root->data;
float lres=findmax(root->left);
float rres=findmax(root->right);
if(lres>res)
    res=lres;
if(rres>res)
    res=rres;
return res;
}
float findmin(node* root)
{
if(root==NULL)
    return INT_MAX;
float res=root->data;
float lres=findmin(root->left);
float rres=findmin(root->right);
if(lres<res)
    res=lres;
if(rres<res)
    res=rres;
return res;
}
float coffrng(node* root)
{
float maxx=findmax(root);
float minn=findmin(root);
return (maxx-minn)/maxx+minn;
}
int main()
{
node* root=getnode(3);
root->left=getnode(4);
root->right=getnode(5);
root->left->left=getnode(7);
root->left->right=getnode(1);
cout<<coffrng(root);
}
