#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>



int main(){
	int n, count = 0;
	while(1){
		printf("n -> ");
		scanf("%d",&n);
		if(n == 0)
			break;
		else if(n % 3 == 0 && n != 0)
			count ++;
	}
	printf("%d\n",count);
	return 0;
}
