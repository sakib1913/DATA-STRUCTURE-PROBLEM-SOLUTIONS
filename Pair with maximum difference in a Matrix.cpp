#include<bits/stdc++.h>
using namespace std;
#define N 4
#define M 4

int print(int mat[M][N])
{
int maxele=INT_MIN;
int minele= INT_MAX;
for(int i=0;i<N;i++){
for(int j=0;j<M;j++)
{
if(mat[i][j]>maxele)
{
maxele=mat[i][j];}
if(mat[i][j]<minele)
{
minele=mat[i][j];
}

}
}
return abs(maxele - minele);
}

int main()
{
	// matrix
	int mat[N][M] = { { 1, 2, 3, 4 },
					{ 25, 6, 7, 8 },
					{ 9, 10, 11, 12 },
					{ 13, 14, 15, 16 } };

	cout << print(mat) << endl;

	return 0;
}

