#include<iostream>
#include<sstream>
using namespace std;

int main()
{
int n=12345;
ostringstream str1;
str1<<n;
string s;
s=str1.str();
cout<<s;
cout<<s[2];
return 0;
}
