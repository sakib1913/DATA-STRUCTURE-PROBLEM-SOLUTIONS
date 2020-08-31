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
int sum=0;
for(int i=1;i<n;i++)
{
arr[0]+=arr[i];
sum+=arr[0];
}
cout<<sum<<endl;
return 0;

}
