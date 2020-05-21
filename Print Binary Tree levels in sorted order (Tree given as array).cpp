#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int n)
{int level=0;
for(int i=0;i<n;level++)
{
int cou=(int)pow(2,level);
cou=cou-1;
int j=min(cou+i,n-1);
sort(arr+i,arr+j+1);
while(i<=j)
{
cout<<arr[i]<<" ";
i++;
}
cout<<endl;

}
}
int main()
{
int arr[]={2,4,3,8,7,6,9};
int n=sizeof(arr)/sizeof(arr[0]);

print(arr,n);
return 0;
}
