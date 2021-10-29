#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int count_even(int a, int count){
	if(a % 2 == 0)
		count++;
	if(a > 10)
		count_even(a/10,count);
	else
		return count;
}

int main(){
	int a;
	printf("input a -> ");
	scanf("%d", &a);
	printf("%d\n", count_even(a, 0));
	return 0;
}
