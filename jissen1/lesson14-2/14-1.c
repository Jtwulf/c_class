#include<stdio.h>

int main(){
	int a, b;
	printf("a b ->");
	scanf("%d %d",&a,&b);

	int flag, count = 0;
	for(int i = a; i <= b; i++){
		flag = 0;
		for(int j = i-1; j > 1; j--){
			if(i % j == 0){
				flag = 1;
			}
		}
		if(flag == 0 && i != 0 && i != 1)
			count ++;
	}

	printf("%d\n",count);

	return 0;
}
