#include<iostream>
using namespace std;
int fun(int arr[],int n)
{
int cnt=0;
int len=1;
for(int i=0;i<n-1;i++)
{
if(arr[i+1]<=arr[i])
len++;
else
{
cnt+=(((len+1)*len)/2);
len=1;
}
}
if(len>1)
cnt+=(((len+1)*len)/2);
return cnt;
}
int main()
{
int arr[]={4, 3, 2, 1};
int n= sizeof(arr)/sizeof(arr[0]);
cout<<fun(arr,n);
return 0;
}
