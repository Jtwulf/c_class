#include<stdio.h>

int main(){
	int joutei, katei, height;
	printf("上底を入力：");
	scanf("%d",&joutei);
	printf("下底を入力：");
	scanf("%d",&katei);
	printf("高さを入力：");
	scanf("%d",&height);
	printf("%d\n",((joutei+katei)*height)/2);
	return 0;
}
