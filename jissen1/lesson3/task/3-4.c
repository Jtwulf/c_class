#include<stdio.h>
void x_waru_y(int x, int y);

int main(){
	int x, y;
	printf("2つの整数値を入力(x,y):");
	scanf("%d %d",&x,&y);
	x_waru_y(x,y);
	return 0;
}

void x_waru_y(int x, int y){
	int a = 0, i;
	while(x >= y){
		a ++;
		x = x-y;
	}
	printf("商：%d  剰余：%d\n",a,x);
}
