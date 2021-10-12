#include<stdio.h>
#include<math.h>

void print_power(int n);

int main(){
	print_power(1);
	return 0;
}

void print_power(int n){
	if(10000 > pow(2,n)){
		printf("%d\n",(int)pow(2,n));
		print_power(n+1);
	} else {
		return;
	}
}
