#include<bits/stdc++.h>
using namespace std;
class compare{
private:
int num;
public:
compare(int n){
num=n;
}
int operator()(int num_1,int num_2)
{return abs(num-num_1)<abs(num-num_2);
}
};
void rearrange(int arr[],int n,int k)
{
stable_sort(arr,arr+n,compare(k));
}
int main()
{
int arr[]={5,3,2,1};
int n=sizeof(arr)/sizeof(arr[0]);
int k=3;
rearrange(arr,n,k);
}
