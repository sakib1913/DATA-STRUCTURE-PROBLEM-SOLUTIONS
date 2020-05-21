#include<iostream>
using namespace std;
int main()
{

	int matrix[5][5], row_index, column_index, x = 1, size = 5;

	// Get the square matrix
	for (row_index = 0; row_index < size; row_index++) {
		for (column_index = 0; column_index < size; column_index++) {

			matrix[row_index][column_index] =x++;
		}
	}

	// Display the matrix
	cout<<"The matrix is"<<"\n";
	for (row_index = 0; row_index < size; row_index++) {
		for (column_index = 0; column_index < size; column_index++) {

          cout<<matrix[row_index][column_index]<<" ";
		}
		cout<<"\n";
	}

	cout<<"\n";

	cout<<"now we will print the index elements of matrix"<<"\n";
	for(row_index=0;row_index<size;row_index++){
	for(column_index=0;column_index<size;column_index++){
	if(row_index==column_index)
	{
	cout<<matrix[row_index][column_index]<<" ";
	}
	}
	}

	cout<<"\n"<<"now we will print the eelements above diagonal elements"<<"\n";
	for(row_index=0;row_index<size;row_index++){
	for(column_index=0;column_index<size;column_index++){
	if(row_index<column_index)
	{
	cout<<matrix[row_index][column_index]<<" ";
	}
	}
	}
	return 0;
	}

