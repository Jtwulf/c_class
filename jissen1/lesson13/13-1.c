#include<stdio.h>

struct array {
	int num;
	struct array *next;
} ;

int main(){
	struct array *p;
	struct array data1, data2, data3, data4, data5;
	data1.num = 10;
	data2.num = 20;
	data3.num = 30;
	data4.num = 40;
	data5.num = 15;

	data1.next = &data2;
	data2.next = &data3;
	data3.next = &data4;
	data4.next = NULL;
	data1.next = &data5;
	data5.next = &data2;

	p = &data1;

	while(p != NULL){
		printf("%d ",p->num);
		p = p->next;
	}
	printf("\n");
	return 0;
}
