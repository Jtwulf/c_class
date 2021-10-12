#include<stdio.h>

int conversion_to_binary(int n);

int main(){
	int n = 1032;
	printf("%d\n",conversion_to_binary(n));
	return 0;
}

int conversion_to_binary(int n){
	int one = 0;
	while(n != 0){
		if(n % 2 == 1)
			one ++;
		n = n/2;
	}
	return one;
}

