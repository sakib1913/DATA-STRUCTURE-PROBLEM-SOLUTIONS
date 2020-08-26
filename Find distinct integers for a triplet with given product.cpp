#include<bits/stdc++.h>
using namespace std;
void findtrip(int x)
{
vector<int> v;
for(int i=2;i<sqrt(x);i++)
{
if(x%i==0)
{
v.push_back(i);
if(x/i!=i)
{
v.push_back(x/i);
}
}
}
bool found=false;
int k=v.size();
for(int i=0;i<k;i++)
{

int a=v[i];
for(int j=0;j<k;j++)
{
int b=v[j];
if((x/(a*b)!=a) && (x/(a*b)!=b) && (x/(a*b)!=1) && (x%(a*b)==0) && (a!=b))
{cout<<a<<" "<<b<<" "<<(x/(a*b))<<endl;
found=true;
break;
}
}
if(found)
    break;

}
if(!found)
    cout<<"nf"<<endl;
}


int main()
{

int num=24;
findtrip(num);
return 0;
}
