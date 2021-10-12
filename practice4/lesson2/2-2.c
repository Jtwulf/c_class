#include<stdio.h>

void swap4(int *pa, int *pb, int *pc, int *pd){
	int abuf = *pa, bbuf = *pb, cbuf = *pc, dbuf = *pd;
	*pa = bbuf;
	*pb = cbuf;
	*pc = dbuf;
	*pd = abuf;
}

int main(){
	int a, b, c, d;
	printf("input 4 number -> ");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	int *pa = &a, *pb = &b, *pc = &c, *pd = &d;
	swap4(pa, pb, pc, pd);
	printf("%d %d %d %d\n",a, b, c, d);
	return 0;
}
