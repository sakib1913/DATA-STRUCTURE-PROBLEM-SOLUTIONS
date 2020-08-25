#include<bits/stdc++.h>
using namespace std;
void functionn(queue<string> &q)
{
stack<string> st;
int sizee=q.size();
while(sizee--)
{
string temp=q.front();
q.emplace(temp);/// this will insert the fornt element at the end of queue
st.push(temp);
q.pop();
}
while(!st.empty())
{
string x=st.top();
q.push(x);
st.pop();
}
while(!q.empty())
{
cout<<q.front()<<" ";
q.pop();
}
}
int main()
{
queue<string> q;
q.push("sakib");
q.push("shabir");
q.push("tantray");
q.push("kashmir");
functionn(q);
}
