#include<stdio.h>

int euclid(int a, int b);

int main(){
	int bunbo, bunsi;
	printf("分子を入力:");
	scanf("%d",&bunsi);
	printf("分母を入力:");
	scanf("%d",&bunbo);

	int i = euclid(bunsi,bunbo);

	printf("約分した結果:%d/%d\n",bunsi/i,bunbo/i);

	return 0;
}

int euclid(int a, int b){
	while(a != b) {
		if (a < b)
		       	b -= a;
		else
		       	a-= b;
	}
	return a;
}
