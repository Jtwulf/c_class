#include<stdio.h>

int main(){
	int num;
	while(1){
		printf("正の整数を入力して下さい:");
		scanf("%d",&num);
		if(num > 0) break;
	}

	int digit = 1;
	while(num >= 10){
		num = num / 10;
		digit ++;
	}
	printf("%d桁です\n",digit);
	return 0;
}
