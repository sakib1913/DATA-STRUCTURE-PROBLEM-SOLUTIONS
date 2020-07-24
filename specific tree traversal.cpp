#include<iostream>
#include<queue>
using namespace std;
struct node{int data;
node* left;
node* right;
};
node* newnode(int data)
{
node* temp= new node;
temp->data=data;
temp->left=temp->right=NULL;
return temp;
}
void traversal(node* root){
if(root==NULL)
return;
cout<<root->data;
if(root->left != NULL)
cout<<" "<<root->left->data<<" "<<root->right->data;
if(root->left->left==NULL)
return;
queue<node*> q;
q.push(root->left);
q.push(root->right);
node* f=NULL;
node* s=NULL;
while(!q.empty()){
f=q.front();
q.pop();
s=q.front();
q.pop();
cout<<" "<<f->left->data<<" "<<s->right->data;
cout<<" "<<f->right->data<<" "<<s->left->data;
if(f->left->left!=NULL)
{
q.push(f->left);
q.push(s->right);
q.push(f->right);
q.push(s->left);}
}
}

int main(){
node* root=newnode(1);
root->left=newnode(2);
root->right=newnode(3);
root->left->left=newnode(4);
root->left->right=newnode(5);
root->right->left=newnode(6);
root->right->right=newnode(7);
traversal(root);
}
