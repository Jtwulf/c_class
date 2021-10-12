#include<stdio.h>
int min(int x, int y, int z);

int main(){
	int x, y, z;
	printf("3つの整数を入力して下さい。\n");
	printf("1つ目：");
	scanf("%d",&x);
	printf("2つ目：");
	scanf("%d",&y);
	printf("3つ目：");
	scanf("%d",&z);
	printf("最小値は、%dです。\n",min(x,y,z));
	return 0;
}

int min(int x, int y, int z){
	int min = x;
	if(min > y){
		min = y;
	}
	if(min > z){
		min = z;
	}
	return min;
}
