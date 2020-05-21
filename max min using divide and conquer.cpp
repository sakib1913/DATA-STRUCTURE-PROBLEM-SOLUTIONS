#include<iostream>
using namespace std;
void print(int a[],int i,int n)
{
for(i=0;i<n;i++)
{
cout<<a[i]<<endl;
}
}
void minimax(int a[],int low,int high,int& min,int& max)
{
if(low==high)
{
if(max<a[low])
max=a[low];
if(min>a[high])
min=a[high];
return;
}
if(high-low==1)
{
if(a[high]>a[low])
{
if(min>a[low])
min=a[low];
if(max<a[high])
max=a[high];
}
else
{
if(min>a[high])
min=a[high];
if(max<a[low])
max=a[low];
}
return;
}
int mid=(low+high)/2;
minimax(a,low,mid,min,max);
minimax(a,mid+1,high,min,max);
}
int main()
{
int a[]={12,11,0,2,147,76},i,n;
n=sizeof(a)/sizeof(a[0]);
int max=INT8_MIN;
int min=INT8_MAX;
cout<<"Given array is "<<endl;
print(a,i,n);
minimax(a,0,n-1,min,max);
cout<<endl<<"Min element is "<<min<<endl;
cout<<"Max element is "<<max;
return 0;
}
