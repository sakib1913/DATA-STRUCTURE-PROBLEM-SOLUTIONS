#include<bits/stdc++.h>
using namespace std;
void findmax(int arr[],int n)
{
sort(arr,arr+n,greater<int>());
for(int i=0;i<n;i++)
{
cout<<arr[i];
}
}
int main()
{
int arr[]={3,5,2,7,9,8};
int n=sizeof(arr)/sizeof(arr[0]);
findmax(arr,n);
return 0;}
