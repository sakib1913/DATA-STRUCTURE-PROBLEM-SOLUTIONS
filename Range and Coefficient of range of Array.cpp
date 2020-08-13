#include<bits/stdc++.h>
using namespace std;
float findmax(int arr[],int n)
{int res=arr[0];
for(int i=1;i<n;i++)
{
res=max(res,arr[i]);
}
cout<<res<<"max\n";
return res;
}
float findmin(int arr[],int n)
{int res=arr[0];
for(int i=1;i<n;i++)
{
res=min(res,arr[i]);
}
cout<<res<<"min\n";
return res;
}

void coffrn(int arr[],int n)
{
float maxx=findmax(arr,n);
float minn=findmin(arr,n);
float range=maxx-minn;
float div=maxx+minn;
cout<<"div"<<div<<"\n";
float corange=range/div;
cout<<range<<" "<<"\n";
cout<<"coff of range "<<corange;
}
int main()
{int n;
cout<<"enter n\n";
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
coffrn(arr,n);
}
