#include<stdio.h>
int main(){
	int x[] = {1,2,3,4,5,6,7,8,9};
	int y[] = {1,2,3,4,5,6,7,8,9};

	for(int i = 0; i < 9; i++){
		for(int j = 0; j < 9; j++){
			printf("%d\t",x[i]*y[j]);
		}
		printf("\n");
	}

	return 0;
}
