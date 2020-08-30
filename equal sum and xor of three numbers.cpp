#include<bits/stdc++.h>
using namespace std;
int calculate(int n)
{
int resu=1;
while(n--)
{
resu=resu*3;
}
return resu;
}
int convert_to_binary(int n)
{
int countt=0;
while(n)
{

if((n&1)==0)
{
countt++;
}
n=n>>1;
}
return countt;
}
int main()
{int n;
cout<<"enter the nunmber\n";
cin>>n;
int ret=convert_to_binary(n);
//cout<<ret;
int  res=calculate(ret);
cout<<res;

}
