#include<stdio.h>
int gcd(int a, int b);

int main(){
	int  a,b;
	printf("2つの整数を入力して下さい:\n");
	printf("1つ目：");
	scanf("%d",&a);
	printf("2つ目：");
	scanf("%d",&b);

	int ans = gcd(a,b);
	printf("2つの整数の最大公約数は、%dです。\n",ans);
	return 0;
}

int gcd(int a, int b){
	int r = a % b;
	printf("%d %% %d = %d\n",a,b,r);
	if(r == 0){
		return b;
	}
	gcd(b,r);
}
