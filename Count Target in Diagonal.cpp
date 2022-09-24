#include <iostream>
using namespace std;
const int N=100;

//countNumberOfTimesTargetIsInDiagonal containing row, col
int countNumberOfTimesTargetIsInDiagonal(int n, int A[][N], int row, int col, int target){
	int ans=0;
	
	int i=row;
	int j=col;
	
	// For upper right
	while (i>=0 && j<n){
		if(A[i][j]==target){
			ans++;
		}
	i--;
	j++;
	}
	
	// For lower left
	while (i<n && j>=0){
		if(A[i][j]==target){
			ans++;
		}
	i++;
	j--;
	}
	
	// For upper left
	while (i>=0 && j>=0){
		if(A[i][j]==target){
			ans++;
		}
	i--;
	j--;
	}
 
	// For lower right
	while (i<n && j<n){
		if(A[i][j]==target){
			ans++;
		}
	i++;
	j++;
	}
	
	return ans;
}

int main() {
	int n;
	cin>>n;
	int A[N][N];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>A[i][j];
		}
	}
	cout<<"Ans: "<<countNumberOfTimesTargetIsInDiagonal(n, A, 1, 2, 2)<<"\n";
	return 0;
}
