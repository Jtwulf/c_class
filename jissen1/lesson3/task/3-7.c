#include<stdio.h>

int searchArray(int n, int na[]);

int main(){
	int n;
	do{
		printf("整数を入力して下さい：");
		scanf("%d",&n);
		int dataTB[5] = {5,31,19,71,43};
		if(searchArray(n,dataTB) == 1){
			printf("◯\n");
		} else {
		        printf("×\n");
		}
        }while(n != 0);
	return 0;
}

int searchArray(int n, int na[]){
	int i;
	for(i = 0; i < 5 ;i++){
		if(na[i] == n){
			return 1;
		}
	}
	return 0;
}
