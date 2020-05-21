#include<bits/stdc++.h>
using namespace std;
 int print(int arr[],int n)
 {
bool isZeroPresent = false;
for(int i=0;i<n;i++)
{
if(arr[i]==0)
{
isZeroPresent = true;
break;
}
}
if(isZeroPresent)
   return n;
return 0;
 }
 int main()
{
    int arr[] = { 1, 2, 3, 0, 1, 2, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << print(arr, n);

    return 0;
}
