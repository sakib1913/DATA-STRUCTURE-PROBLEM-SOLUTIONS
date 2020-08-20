#include<bits/stdc++.h>
using namespace std;
void check(int arr[],int arr1[],int n)
{int start=0;
int endd=n-1;
for(int i=0;i<n;i++)
{
if(arr[i]!=arr1[i])
{
start=i;
break;
}
}
for(int i=n-1;i>=0;i--)
{
if(arr[i]!=arr1[i])
{

endd=i;
break;}
}
reverse(arr+start,arr+endd+1);
for(int i=0;i<n;i++)
{

if(arr[i]!=arr1[i])
{

cout<<"no"<<endl;
return;}
}
cout<<"yes"<<endl;
}
int main()
{
int arr[]={1, 3, 2, 4};
int arr1[]={1, 2, 3, 4};
int n=sizeof(arr)/sizeof(arr[0]);
check(arr,arr1,n);
return 0;
}
