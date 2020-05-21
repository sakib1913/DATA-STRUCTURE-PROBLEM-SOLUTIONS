#include<iostream>
using namespace std;
int print(int arr[],int n,int a,int b)
{
int sum=0;
for(int i=0;i<n-2;i++)
{
for(int j=i+1;j<n-1;j++)
{
for(int k=j+1;k<n;k++)

if(arr[i]+arr[j]+arr[k]>=a && arr[i]+arr[j]+arr[k]<=b)
  sum++;
}}
return sum;}
int main()
{
int arr[]={2, 7, 5, 3, 8, 4, 1, 9};
int n=sizeof(arr)/sizeof(arr[0]);
int a=8;
int b=16;
cout<<print(arr,n,a,b);}
