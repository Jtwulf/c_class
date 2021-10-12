#include<stdio.h>

int main(){
	int n;
	printf("ベクトルの次元数を入力> ");
	scanf("%d",&n);

	int a[n], b[n], sum = 0;
	for(int i = 0 ; i < 5; i++){
		printf("ベクトルaの%d番目の値を入力> ",i+1);
		scanf("%d",&a[i]);
	}
	for(int i = 0 ; i < 5; i++){
		printf("ベクトルbの%d番目の値を入力> ",i+1);
		scanf("%d",&b[i]);
		sum += a[i]*b[i];
	}
	printf("ベクトルaとベクトルbの内積は=%d\n",sum);
	return 0;
}
