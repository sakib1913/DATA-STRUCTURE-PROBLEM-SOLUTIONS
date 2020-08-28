#include<bits/stdc++.h>
using namespace std;
#define n 3
#define m 4
void func(int mat[n][m])
{
queue<pair<int,int>> q;
q.push(make_pair(0,0));
int countt=0;
while(!q.empty())
{
pair<int,int> p=q.front();
q.pop();
if(p.first==n-1 && p.second==m-1)
    {
        countt++;
    }
if(p.first+1<n && mat[p.first+1][p.second]==1)
{
q.push(make_pair(p.first+1,p.second));

}
if(p.second+1<m && mat[p.first][p.second+1]==1)
{

q.push(make_pair(p.first,p.second+1));

}


}
cout<<countt;
}
int main()
{
int mat[n][m]={
{ 1, 0, 0, 1 },
                         { 1, 1, 1, 1 },
                         { 1, 0, 1, 1 }};
func(mat);
return 0;
}
