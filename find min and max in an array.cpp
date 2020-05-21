#include<iostream>
using namespace std;
int findmin(int arr[],int n)
{
if(n==1)
  return arr[0];
return min(arr[n-1],findmin(arr,n-1));
}
int main()
{
int arr[]={2,3,4,5,6,7};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<findmin(arr,n);
return 0;
}
