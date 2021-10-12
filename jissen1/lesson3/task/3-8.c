#include<stdio.h>
void reverseArray(int n, int array[]);

int main(){
	int n = 8; //要素数
	int array[8] = {1,2,3,4,5,6,7,8};

	printf("逆順に並び替える前：");
	int i;
	for(i = 0; i < n; i++){
		printf("%d ",array[i]);
	}
	printf("\n");
	printf("逆順に並び替えた後：");
	reverseArray(n,array);
	return 0;
}

void reverseArray(int n, int array[]){
	int i;
	for(i = n-1; i >= 0; i--){
		printf("%d ",array[i]);
	}
	printf("\n");
}
