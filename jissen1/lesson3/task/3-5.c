#include<stdio.h>
#define max 10
void printTable(int m, int n);

int main(){
	int i,j;
	for(i = 0; i < max; i++){
		for(j = 0; j < max; j++){
			printTable(i,j);
		}
	}

	return 0;
}

void printTable(int m, int n){
	if(m*n < 10){
		printf("%d  ",m*n);
	} else {
		printf("%d ",m*n);
	}
	if(n == max -1){
		printf("\n");
	}
}
