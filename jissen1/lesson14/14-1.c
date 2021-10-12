#include<stdio.h>

int count_prime(int a, int b);

int main(){
	int a, b;
	printf("a,b -> ");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("%d\n",count_prime(a,b));
	return 0;
}

int count_prime(int a, int b){
	int flag, i, j, count = 0;
	for(i = a; i <= b; i++){
		flag = 0;
		for(j = 2; j < i; j++){
			if(i % j == 0)
				flag = 1;
		}
		if(flag == 0) count ++;
	}
	return count;
}
