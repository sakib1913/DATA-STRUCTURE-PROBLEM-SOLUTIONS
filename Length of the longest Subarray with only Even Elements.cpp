#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int n)
{int coutt=0;
for(int i=0;i<n;i++)
{
if(arr[i]%2==0){
coutt++;}
}
cout<<coutt-1;
}
int main()
{
    int arr[] = { 9,  5, 4, 4, 2, 4, 1 };

    int N = sizeof(arr) / sizeof(arr[0]);

    print(arr, N);

    return 0;
}
