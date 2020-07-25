#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cout<<"ENter string\n";
cin>>s;
stack<char> st;
for(int i=0;i<s.length();i++)
{
if(st.empty()){
st.push(s[i]);}
else
{
char c=st.top();
if(c!=s[i] && tolower(c) == tolower(s[i]))
{
st.pop();
}
else
{
st.push(s[i]);
}
}
}
cout<<st.size();
}
