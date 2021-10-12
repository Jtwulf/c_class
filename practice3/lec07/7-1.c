#include<stdio.h>

int main(){
	int i = 100;
	int *p_1 = &i;
	int *p_2 = p_1;

	printf("%d, %p, %p \n",i,p_1,p_2);
	printf("%p, %p, %p \n",&i,&p_1,&p_2);

	return 0;
}
