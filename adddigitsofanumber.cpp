#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main()
{
int n;
cout<<"enter number ";
cin>>n;
ostringstream str1;
str1<<n;
string s=str1.str();
int x=s.length();
double sum=0;
for(int i=0;i<x;i++)
{sum=sum+s[i];
}
cout<<sum;
return 0;}
