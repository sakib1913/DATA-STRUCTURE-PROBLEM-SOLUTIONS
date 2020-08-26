#include<bits/stdc++.h>
using namespace std;
int main()
{
int arr[]={ 2, 3, 2 };
int n=sizeof(arr)/sizeof(arr[0]);
int arrr[]={ 10, 30, 40 };
int n2=sizeof(arrr)/sizeof(arrr[0]);
int sum=0;
int summ=0;
for(int i=0;i<n;i++)
{
sum+=arr[i];
}
for(int j=0;j<n2;j++)
{
summ+=arrr[j];
}

if(sum>summ)
{cout<<"market A"<<endl;
}
else if(sum==summ)
{
cout<<"same profit"<<endl;
}
if(summ>sum)
{

cout<<"market B"<<endl;
}
return 0;
}
