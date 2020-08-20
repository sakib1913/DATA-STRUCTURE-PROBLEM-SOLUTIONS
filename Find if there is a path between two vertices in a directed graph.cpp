
#include<bits/stdc++.h>
using namespace std;
class graph
{
int V;
list<int> *adj;
public:
graph(int V);
void addedge(int u,int v);
bool checkedge(int s,int d);
};
graph::graph(int V)
{
this->V=V;
adj=new list<int>[V];
}
void graph::addedge(int u,int v)
{
adj[u].push_back(v);
}
bool graph::checkedge(int s,int d)
{
if(s==d)
    return true;
bool *visited = new bool[V];
for(int i=0;i<V;i++)
{
visited[i]=false;
}
list<int>::iterator it;
visited[s]=true;
queue<int> q;
q.push(s);
while(!q.empty())
{s=q.front();
q.pop();
for(it=adj[s].begin();it!=adj[s].end();++it)
{
if(*it==d)
    return true;
if(!visited[*it])
{
visited[*it]=true;
q.push(*it);
}
}

}
return false;
}
int main()
{
graph g(4);

    g.addedge(0, 2);
    g.addedge(1, 2);
    g.addedge(2, 0);
    g.addedge(2, 3);
    g.addedge(2, 3);
   int s=1;
   int d=3;
if(g.checkedge(s,d))
    cout<<"yes"<<endl;
else
    cout<<"no"<<endl;
return 0;


}
