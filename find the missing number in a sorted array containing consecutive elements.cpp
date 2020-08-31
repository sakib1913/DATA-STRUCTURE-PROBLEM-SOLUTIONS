#include<bits/stdc++.h>
using namespace std;
int main()
{
int arr[]={1,2,3,4,5,6,7,8,9};
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n-1;i++)
{
int x=arr[i+1];
if(x-1!=arr[i])
{
cout<<arr[i]+1<<endl;
break;
}
if(i==n-2)
{
cout<<"-1"<<endl;}
}
return 0;
}
