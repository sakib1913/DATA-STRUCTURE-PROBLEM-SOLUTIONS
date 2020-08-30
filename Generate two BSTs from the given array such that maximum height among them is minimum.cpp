#include<bits/stdc++.h>
using namespace std;
int call_log_fun(int k)
{int r=0;
while(k)
{
k=k/2;
r++;
}
return r;
}
void functiono(int arr[],int n)
{
int res=call_log_fun(n/2+n%2);
cout<<res-1;
}
int main()
{
int arr[]={1,5,3,2,4,6,8,9,4,2,12};
int n =sizeof(arr)/sizeof(arr[0]);
functiono(arr,n);
}
