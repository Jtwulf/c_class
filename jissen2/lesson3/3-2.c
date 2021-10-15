#include<stdio.h>

void hanoi(int n, char a, char b, char c){
	if(n == 1){
		printf("1枚目の円盤を柱%cから柱%cに移動\n",a,b);
		return;
	}
	hanoi(n-1, a, b, c);
	printf("%d枚目の円盤を柱%cから柱%cに移動\n",n,a,b);
	hanoi(n-1, b, c, a);
}

int main(){
	int n;
	printf("円盤の枚数を入力>");
	scanf("%d",&n);
	hanoi(n, 'a', 'b', 'c');
	return 0;
}
