#include<stdio.h>

int cmn(int x, int y);

int main(){
	int x,y;
	printf("整数xを入力：");
	scanf("%d",&x);
	printf("整数yを入力：");
	scanf("%d",&y);

	printf("xとyの公約数の個数は%d\n",cmn(x,y));

	return 0;
}


int cmn(int x, int y){
	int n,i,sum = 0;
	if(x > y){
		n = y;
	} else {
		n = x;
	}	

	for(i = 2; i <= n; i++){
		if(x % i == 0 && y % i == 0){
			sum++;
		}	
	}

	return sum;
}
