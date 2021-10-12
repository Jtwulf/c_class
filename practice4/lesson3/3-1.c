#include<stdio.h>

int f(int n){
	if(n == 1) return 7;
	else if(n == 0) return 5;
	else{
		return 2*f(n-2)+f(n-1);
	}
}

int main(){
	for(int i = 0; i < 9; i++){
		printf("%d\n",f(i));
	}
	return 0;
}
