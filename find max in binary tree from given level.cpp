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
temp->left=NULL;
temp->right=NULL;
temp->data=data;
return temp;
}
int print(node* root,int level)
{
if(root==NULL)
    return 0;
if(level==0)
    return root->data;
int left_subtree_value=print(root->left,level-1);
int right_subtree_value=print(root->right,level-1);
return max(left_subtree_value,right_subtree_value);

}
int main()
{node* root=NULL;
    root = newNode(45);
    root->left = newNode(46);
    root->left->left = newNode(18);
    root->left->left->left = newNode(16);
    root->left->left->right = newNode(23);
    root->left->right = newNode(17);
    root->left->right->left = newNode(24);
    root->left->right->right = newNode(21);
    root->right = newNode(15);
    root->right->left = newNode(22);
    root->right->left->left = newNode(37);
    root->right->left->right = newNode(41);
    root->right->right = newNode(19);
    root->right->right->left = newNode(49);
    root->right->right->right = newNode(29);
    int level=2;
    cout<<print(root,level);

}
