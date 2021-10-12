#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int prime_sub(int *p, int n);

int main(){
	int array[5],  n = 5;
	for(int i = 0; i < n; i++){
		printf("array[%d] -> ",i);
		scanf("%d",&array[i]);
	}
	int *p = array;

	int ans = prime_sub(&array[0],5);
	printf("%d\n",ans);
	return 0;
}

int prime_sub(int *p, int n){
	int limit = 0, flag, count = 0;
	while(limit != n){
		int i = *p;
		flag = 0;
		for(int j = i-1; j > 1; j--){
			if(i % j == 0)
				flag = 1;
		}
		if(flag == 0 && *p != 0 && *p != 1)
			count ++;
		limit++;
		p++;
	}
	return count;
}
