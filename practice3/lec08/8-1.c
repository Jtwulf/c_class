#include<stdio.h>

int main(){
	int a[2] = {10,20};
	int *p1;
	int *p2;

	p1 = a;
	*p1 *=3;
	p2 = &a[1];
	scanf("%d",p2);

	printf("%p, %p, %p\n",a, &a[0], &a[1]);
	printf("%ld\n",&a[1] - &a[0]);
	return 0;
}
