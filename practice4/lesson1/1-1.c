#include<stdio.h>

int main(){
	int buf, a[5], j = 0;
	for(int i = 0; i < 5; i++){
		printf("%dつ目の要素 -> ",i+1);
		scanf("%d",&buf);
		if(buf % 2 == 0){
			a[j] = buf;
			j++;
		}
	}

	printf("作成された偶数リスト : ");
	for(int i = 0; i < j; i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}
