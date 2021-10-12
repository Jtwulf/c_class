#include<stdio.h>
void keisan();

int x,y;
int main(){
	printf("2つの整数を入力して下さい\n");
	printf("1つ目：");
	scanf("%d",&x);
	printf("2つ目：");
	scanf("%d",&y);

	keisan(x,y);

	return 0;
}

void keisan(){
	printf("%d - %d = %d\n",x,y,x-y);
	printf("%d + %d = %d\n",x,y,x+y);
}
