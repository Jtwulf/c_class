#include<stdio.h>
double concentration(int x);

int main(){
	int x;
	printf("100グラムの水に加える食塩の量を入力して下さい：");
	scanf("%d",&x);	
	printf("食塩水の濃度は%3.1f％です。\n",concentration(x));
	return 0;
}

double concentration(int x){
	return (x / (x+100.0))*100;

}
