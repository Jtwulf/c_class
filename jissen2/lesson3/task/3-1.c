#include<stdio.h>

int c_mn(int m, int n){
	if(n > m-n) n = m-n;
	if(n == 0) return 1;
	else if(n == 1) return m;
	else return c_mn(m-1,n-1) + c_mn(m-1,n);
}

int main(){
	int m, n;
	printf("m nを入力: ");
	scanf("%d %d", &m, &n);
	printf("Cm,n:%d\n",c_mn(m,n));
	return 0;
}
