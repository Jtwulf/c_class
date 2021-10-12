#include<stdio.h>

int main(){
	double xc = 65, *pc;
	double xcs[5] = {1.0,2.0,3.0,4.0,5.0}, *pcs1, *pcs2;
	pc = &xc;
	pcs1 = &xcs;
	pcs2 = &xcs[0];

	printf("double型変数xc=%f\n",xc);
	printf("double型変数xcを指すポインタ変数pc=%p\n",pc);
	printf("double型変数xcのアドレス=%p\n",&xc);
	printf("double型変数xcを指すポインタ変数pcのアドレス=%p\n",&pc);

	printf("double型配列xcsの先頭要素の中身=%f\n",xcs[0]);
	printf("double型配列xcsを指すポインタ変数pcs1=%p\n",pcs1);
	printf("double型配列xcsの先頭要素を指すポインタ変数pcs2=%p\n",pcs2);
	printf("double型配列xcsの先頭要素のアドレス=%p\n",&xcs[0]);
	printf("double型配列xcsを指すポインタ変数pcs1のアドレス=%p\n",&pcs1);
	printf("double型配列xcsの先頭要素を指すポインタ変数pcs2のアドレス%p\n",&pcs2);
	return 0;
}
