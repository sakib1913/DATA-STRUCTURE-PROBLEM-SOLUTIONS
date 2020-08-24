#include<bits/stdc++.h>
using namespace std;
void cntary(int x,int n,int arr[],int val)
{
int z=arr[x];
for(int i=x;i<n;i++)
{
if(z==arr[i])
{
val++;
}
}
x++;
if(x<n)
{
cntary(x,n,arr,val);
}
else
{
cout<<val<<" ";}
}
int main()
{
int arr[]={1, 5, 6, 1, 9, 5, 8, 10, 8, 9};
int n=sizeof(arr)/sizeof(arr[0]);
int x=0;
int val=0;
cntary(x,n,arr,val);
return 0;
}
