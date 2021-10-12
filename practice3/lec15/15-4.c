#include<stdio.h>

void print_multi3(int *p, int n);

int main(){
	int arr[] = {11,12,14,20,24,29,30,33}, *p = arr, n = 8;
	print_multi3(p,n);
	printf("\n");
	return 0;
}

void print_multi3(int *p, int n){
	//printf("n:%d ",n);
	//printf("p:%d ",*p);
	if(n == 0){
		return;
	}
	if(*p % 3 == 0){
		printf("%d ",*p);
	}
	p++;
	print_multi3(p,n-1);
}
