#include<stdio.h>

void printWareki(int y);

int main(){
	int year;
	do{
		printf("西暦を入力してください:");
		scanf("%d",&year);

		printWareki(year);
	} while(1926 <= year && year <= 2018);
	
	return 0;
}

void printWareki(int y){
	if(y == 1926){
		printf("昭和元年です。\n");
	} else if(1926 < y && y <= 1988){
		printf("昭和%d年です。\n",y-1925);
	} else if(y == 1989){
		printf("平成元年です。\n");
	} else if(1989 < y && y <= 2018){
		printf("平成%d年です。\n",y-1988);
	} else {
		printf("入力違いです。\n");
	}
}
