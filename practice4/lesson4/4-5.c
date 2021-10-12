#include<stdio.h>
#include<stdlib.h>

int main(){
	int n;
	scanf("%d",&n);
	int *np = (int *)malloc(sizeof(int) * n);
	for(int i = 0; i < n; i++){
		scanf("%d",np+i);
	}
	int p;
	scanf("%d",&p);
	printf("%d\n",p);
	free(np);
	return 0;
}
