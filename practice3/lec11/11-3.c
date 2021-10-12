#include<stdio.h>

int main(){
	int array[] = {0,10,20,30,40,50,60,70,80,90}, *array_ptr = array;
	int n, count = 0;
	printf("n -> ");
	scanf("%d",&n);

	for(int i = 0; i < 10; i++){
		if(n < *(array_ptr+i)){
			count ++;
		}
	}

	printf("%d\n",count);
	return 0;
}
