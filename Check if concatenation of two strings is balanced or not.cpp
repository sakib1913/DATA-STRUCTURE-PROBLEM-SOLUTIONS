#include<bits/stdc++.h>
using namespace std;
int fun(string str,int s)
{
stack<char> st;

for(int i=0;i<s;i++)
{
if(str[i]=='(')
    st.push(str[i]);
else
    {
    if(st.empty())
        return -1;
    else
        {
        st.pop();
        }
    }
}
if(st.empty())
    return 1;
else
    return -1;

}
int main()
{
string s1=")))";
string s2="((()";
string res=s1+s2;
string res2=s2+s1;
int s=res.size();
int x=fun(res,s);
int y=fun(res2,s);
if(x==1 || y==1)
    cout<<"balanced\n";
else
    cout<<"imbalanced\n";
return 0;}
