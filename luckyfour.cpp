#include<iostream>
#include<sstream>
using namespace std;
int main()
{
int t;
cout<<"enter n\n";
cin>>t;
for(int i=0;i<t;i++)
{ int n;
cout<<"enter n\n";
cin>>n;
ostringstream str1;
str1<<n;
string s = str1.str();
int count=0;
int k = (int)s.size();
for(int j=0;j<k;j++)
{if(s[j]=='4')
{
count++;
}
else
{
count=count;
}
}
cout<<count<<endl;
}
return 0;}
