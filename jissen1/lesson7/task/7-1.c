#include<stdio.h>

int main(){
	int pow[10], *pow_ptr = pow;
	int i;

	for(i = 0; i < 10; i++){
		*pow_ptr = (i+1)*(i+1);
		printf("%d\n",*pow_ptr);
		pow_ptr ++;
	}

	return 0;
}
