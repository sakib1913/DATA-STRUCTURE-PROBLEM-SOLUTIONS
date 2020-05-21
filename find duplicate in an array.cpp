#include<bits/stdc++.h>
using namespace std;
int print(int arr[],int n)
{
unordered_map<int,int> freq;
for(int i=0;i<n;i++)
freq[arr[i]]++;
bool dup;//=false;
unordered_map<int,int>::iterator itr;
for(itr=freq.begin();itr!=freq.end();itr++)
{
if(itr->second>1)
{
cout<<itr->first<<" ";
 dup=true;
}
}
if(dup==false)
return -1;
}

int main()
{
int arr[]={2,3,4,5,6,7,8,1,2,4,3,0};
int n=sizeof(arr)/sizeof(arr[0]);
print(arr,n);
return 0;
}
