#include<stdio.h>

int euclid_recursive(int a, int b, int r){
	if(r == 0)
		return b;
	else {
		a = b;
		b = r;
		euclid_recursive(a, b, a%b);
	}
}

int main(){
	int a, b;
	printf("input a, b -> ");
	scanf("%d %d", &a, &b);

	int ans = euclid_recursive(a, b, a%b);
	printf("%d\n",ans);
	return 0;
}
