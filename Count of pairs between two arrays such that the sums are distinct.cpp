#include<bits/stdc++.h>
using namespace std;
void functionn(int arr1[],int arr2[],int n,int m)
{
int countt=0;
unordered_set<int> sett;
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
int sum=arr1[i]+arr2[j];
if(sett.count(sum)==0)
{
countt++;
sett.insert(sum);
}
}
}
cout<<countt<<endl;
}
int main()
{
int arr1[]={1,2,3,4};
int arr2[]={3,5,7,9};
int n=sizeof(arr1)/sizeof(arr1[0]);
int m=sizeof(arr2)/sizeof(arr2[0]);
functionn(arr1,arr2,n,m);
return 0;
}
