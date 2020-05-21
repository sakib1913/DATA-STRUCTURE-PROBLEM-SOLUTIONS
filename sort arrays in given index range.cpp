#include<bits/stdc++.h>
using namespace std;
void funct(int arr[],int N,int a,int b)
{

int l=min(a,b);
int r=max(a,b);
int temp[r-l+1];
int j=0;
for(int i=l;i<=r;i++)
{ temp[j]=arr[i];
j++;
}

int n=sizeof(temp)/sizeof(temp[0]);
sort(temp, temp +n);
j=0;

for(int i=l;i<=r;i++)
{arr[i]=temp[j];
j++;
}
cout<<"print an array\n";
for(int i=0;i<N;i++)
{
cout<<arr[i];}
 }
int main()
{ int arr[] = { 7, 8, 4, 5, 2 } ;
int a=1;
int b=4;
int N=sizeof(arr)/sizeof(arr[0]);
funct(arr,N,a,b);
return 0;}
