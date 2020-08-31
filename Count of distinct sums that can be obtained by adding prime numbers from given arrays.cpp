#include<bits/stdc++.h>
using namespace std;
bool isprime(int v)
{
if(v<=1)
    return false;
for(int i=2;i<v;i++)
{
if(v%i==0)
{
return false;
}
}
return true;
}
void functionn(int arr[],int arrr[],int n,int m)
{ unordered_map<int,int> mp;
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{if(isprime(arr[i]) && isprime(arrr[j]))
{int sum=0;
sum=arr[i]+arrr[j];
mp[sum]++;
}
}
}
int countt=0;
for(auto i:mp)
{
countt++;
}
cout<<countt;
}
int main()
{
int arr[]={2,3};
int arrr[]={2, 2, 4, 7};
int n=sizeof(arr)/sizeof(arr[0]);
int m=sizeof(arrr)/sizeof(arrr[0]);
functionn(arr,arrr,n,m);
}
