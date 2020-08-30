#include<bits/stdc++.h>
using namespace std;
int main()
{string s;
cin>>s;
int n;
cin>>n;
string arr[n];
for(int i=0;i<n;i++)
{

cin>>arr[i];
}
int countt=0;
for(int i=0;i<n;i++)
{
if(s==arr[i])
{
countt++;
}
}
cout<<countt<<endl;
return 0;
}

