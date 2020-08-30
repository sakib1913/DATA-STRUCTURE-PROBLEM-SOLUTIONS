#include<bits/stdc++.h>
using namespace std;
int main()
{
stack<int> st;
st.push(16);
st.push(15);
st.push(29);
st.push(24);
st.push(19);
int n=st.size();
int arr[n];
int t=0;
while(!st.empty())
{
int x=st.top();
if(x%2!=0)
{
arr[t]=x;
t++;
}
st.pop();
}
for(int i=t-1;i>=0;i--)
{
st.push(arr[i]);
}
while(!st.empty())
{
int x=st.top();
cout<<x<<" ";
st.pop();
}
cout<<endl;
return 0;}
