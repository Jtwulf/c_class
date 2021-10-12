#include<stdio.h>

int main(){
	int i, j ,k;

	int A[4][3] = {1,2,3,4,5,6,7,8,9,1,2,3};
	int B[3][2] = {1,5,5,3,8,1};
	int C[4][2]; //積AB
	int D[3][4];

	for(i = 0; i < 4; i++){
		for(j = 0 ; j < 2; j++){
			C[i][j] = A[i][j] *B[i][j];
		}
	}

	for(i = 0; i < 4; i++){
		for(j = 0; j < 3; j++){
			D[j][i] = A[3-i][2-j];
		}
	}
}
