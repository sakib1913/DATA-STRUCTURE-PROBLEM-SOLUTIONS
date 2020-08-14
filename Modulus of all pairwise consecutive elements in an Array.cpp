#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
for(int i=0;i<n-1;i++)
{
int modd=arr[i]%arr[i+1];
cout<<modd<<" ";
}
return 0;
}
