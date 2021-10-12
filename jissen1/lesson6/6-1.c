#include<stdio.h>

int main(){
	char xc = 65, *pc;
	char xcs[5] = {'h','e','l','l','o'} , *pcs1, *pcs2;
	pc = &xc;
	pcs1 = &xcs;
	pcs2 = &xcs[0];

	printf("%c\n",xc);
	printf("%p\n",pc);
	printf("%p\n",&xc);
	printf("%p\n",&pc);

	printf("%c\n",xc);
	printf("%p\n",pcs1);
	printf("%p\n",pcs2);
	printf("%p\n",&xcs[0]);
	printf("%p\n",&pcs1);
	printf("%p\n",&pcs2);
	return 0;
}
