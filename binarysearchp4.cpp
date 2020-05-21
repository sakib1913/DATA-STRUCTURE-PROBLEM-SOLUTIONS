#include<iostream>
#include<bits/stdc++.h>
int bs(int arr[], int l, int r, int x);
using namespace std;
int main()
{int arr[5];
int n=sizeof(arr)/sizeof(arr[0]);
int i;
for (i = 0; i <5; i++) {
    arr[i] = rand();
}
for(i=0;i<5;i++)
{
cout<<arr[i]<<"\n";}
cout<<"after sort";
sort(arr,arr+n);
for(int i=0;i<5;i++)
{
cout<<"\n"<<arr[i];}
int r;
cout<<"\n"<<"enter number to search\n";
cin>>r;
int result = bs(arr, 0, n - 1, r);
if(result == -1)
cout << "Element is not present in array";
else
cout << "Element is present at index " << result;
}
int bs(int arr[], int l, int r, int x)
{
   if (r>= l)
   {
        int mid = l + (r - l)/2;
        if (arr[mid] == x)  return mid;
        if (arr[mid] > x) return bs(arr, l, mid-1, x);
        return bs(arr, mid+1, r, x);
   }
   return -1;

}
