#include<iostream>
using namespace std;
int print(int arr[],int n,int k)
{
int res=0;
for(int i=0;i<n;i++)
for(int j=i+1;j<n;j++)
if((arr[i]+arr[j])%k==0)
res++;
return res;}

int main()
{
int arr[]={2, 2, 1, 7, 5};
int n=sizeof(arr)/sizeof(arr[0]);
int k=4;
cout<<print(arr,n,k);
return 0;}
