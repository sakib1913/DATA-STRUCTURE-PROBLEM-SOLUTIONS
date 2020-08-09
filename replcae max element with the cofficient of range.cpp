#include<bits/stdc++.h>
using namespace std;
int main()
{
float arr[]={ 15, 16, 10, 9, 6, 7, 17 };
int n=sizeof(arr)/sizeof(arr[0]);
float max=*max_element(arr,arr+n);
float min=*min_element(arr,arr+n);
float range=max-min;
float coff_of_range=range/(max+min);
for(int i=0;i<n;i++)
{
if(arr[i]==max)
arr[i]=coff_of_range;
}
for(int i=0;i<n;i++)
cout<<arr[i]<<" ";
return 0;
}
