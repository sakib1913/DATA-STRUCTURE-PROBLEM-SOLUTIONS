#include<bits/stdc++.h>
using namespace std;
int finlcm(int arr[],int n )
{
int lcm=arr[0];
for(int i=0;i<n;i++)
{lcm=(lcm*arr[i])/ __gcd(arr[i],lcm);

}

return lcm;
}
//int lcm=finlcm(arr,n);
//int count=r/lcm-(l-1)/lcm;
int main()
{
int arr[]={1,2};
int n=sizeof(arr)/sizeof(arr[0]);
int l=2;
int r=20;
finlcm(arr,n);
return 0;
}
