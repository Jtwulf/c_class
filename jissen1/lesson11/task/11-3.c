#include<stdio.h>

void euclid(int *den, int *mol);

struct fanction {
	int mol; //分子
	int den; //分母
} data1;

int main(){
	printf("分子 -> ");
	scanf("%d",&data1.mol);
	printf("分母 -> ");
	scanf("%d",&data1.den);

	euclid(&data1.den,&data1.mol);
	printf("%d/%d\n",data1.mol,data1.den);
	return 0;
}

void euclid(int *den, int *mol){
	int a = *den, b = *mol;
	if(a < b){
		int buf = a;
		a = b;
		b = buf;
	}

	int r = a%b;
	while(r != 0){
		a = b;
		b = r;
		r = a%b;
	}
	*den /= b;
	*mol /= b;
}
