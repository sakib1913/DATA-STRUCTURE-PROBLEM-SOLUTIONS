#include<bits/stdc++.h>
using namespace std;
struct node{int data;
node* left;
node* right;
};
node* newnode(int data){
node* temp=new node;
temp->data=data;
temp->left=NULL;
temp->right=NULL;
return temp;
}
void printinorder(node * root  )
{
if(root==NULL)
return;
printinorder(root->left);
cout<<root->data<<" ";
printinorder(root->right);
}
void fillvector(node * root,vector<int>& v){
if(root==NULL){
return;
}
fillvector(root->left,v);
v.push_back(root->data);
fillvector(root->right,v);
}
void sort(vector<int>& v,int n){
int i,key,j;
for(i=1;i<n;i++)
{
key=v[i];
j=i-1;
while(j>=0 && v[j]>key){
v[j+1]=v[j];
j=j-1;
}
v[j+1]=key;
}
}
void findplace(node* root,int val1,int val2){
if(root==NULL)
return;
findplace(root->left,val1,val2);
if(root->data==val1)
root->data=val2;
else if(root->data==val2)
root->data=val1;
findplace(root->right,val1,val2);

}
node* correctBST(node * root)
{
vector<int> v;
fillvector(root,v);
vector<int> v2 =v;
sort(v,v.size());
for(int i=0;i<v.size();i++)
{
if(v[i]!=v2[i])
{
findplace(root,v[i],v2[i]);
break;
}
}
return root;
}

int main()
{

    node* root = newnode(6);
    root->left = newnode(10);
    root->right = newnode(2);
    root->left->left = newnode(1);
    root->left->right = newnode(3);
    root->right->right = newnode(12);
    root->right->left = newnode(7);
    printinorder(root);
    cout<<"\n";
    correctBST(root);
    printinorder(root);
    cout<<"\n";
    }

