#include<bits/stdc++.h>
using namespace std;
bool sortbysecondvalue(pair<char,int> a,pair<char,int>  b)
{
    return a.second>b.second;
}
void check(string s,int k)
{
unordered_map<char,int> ma;
for(int i=0;i<s.length();i++)
    {ma[s[i]]++;}
    vector<pair<char,int>> v;
    copy(ma.begin(),ma.end(),back_inserter(v));
    sort(v.begin(),v.end(),sortbysecondvalue);
    int countt=0;
    for(int i=0;i<v.size();i++)
    {
    if(i == 0 || v[i].second !=v[i-1].second)
    {
    countt++;
    }
    if(countt==k)
    {
        cout<<v[i].first;
        return;
        }

    }
cout<<"nothing found at kth position \n";
}
int main()
{
string s="sakibshabir";
int k=1;
check(s,k);
return 0;
}
