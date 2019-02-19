/*
This program count the number of partitions in colored(number) matirx.
*/
#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> countMapPartition(vector<vector<int>> &A, int i, int j, int color){
	int row = A.size(), col = A[0].size();
	A[i][j] = 0;
	if(j+1<col)											// go right
		if(A[i][j+1] == color)
			countMapPartition(A, i, j+1, color);
	if(i+1<row)											// go down
		if(A[i+1][j] == color)
			countMapPartition(A, i+1, j, color);
	if(j-1>=0)											// go left
		if(A[i][j-1] == color)
			countMapPartition(A, i, j-1, color);
	if(i-1>=0)											// go up
		if(A[i-1][j] == color)
			countMapPartition(A, i-1, j, color);
	return A;
}

int main(){
	
	int row=0, col=0, count=0;
	cin>>row>>col;
	
	vector<vector<int>> A (row, vector<int>(col));
	for(int i=0; i<row; i++)
		for(int j=0; j<col; j++)
			cin>>A[i][j];
	
	for(int i=0; i<row; i++)
		for(int j=0; j<col; j++)
			if(A[i][j] != 0){
				int color = A[i][j];
				A = countMapPartition(A, i, j, color);
				count++;
			}
	cout<<count<<endl;
return 0;
}
