#include<stdio.h>
int main(){
	int i, sum;
	for(i = 1; i <= 6; i++){
		sum += i;
	}

	printf("6面サイコロの目の和は、%dです\n",sum);
	return 0;
}
