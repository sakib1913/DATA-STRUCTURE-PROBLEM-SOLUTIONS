#include<bits/stdc++.h>
using namespace std;
void print(int a[][5],int n,int l,int arr[],int m)
{

for(int i=0;i<n;i++){
unordered_map<int,int> mp;
for(int j=0;j<m;j++)
  mp[a[i][j]] = 1;
int count=0;
for(int j=0;j<l;j++)
{
if(mp[arr[j]])
count+=1;
}
cout<<"row "<<i+1<<count<<endl;
}


}
int main()
{
int a[][5]={{1,2,3,4,5},
            {3,5,7,8,9},
            {7,2,4,90,6},
            {2,4,5,2,9}};
int arr[]={2,4,5};
int l=sizeof(arr)/sizeof(arr[0]);
int m=5;
int n=sizeof(a)/sizeof(a[0]);
print(a,n,l,arr,m);
return 0;



            }
