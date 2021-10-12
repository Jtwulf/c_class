#include<stdio.h>

int main(){
	int a[5][2] = {{1,2},{4,3},{5,6},{8,7},{9,10}};
	int i, j, even = 0, odd = 0;

	for(i = 0; i < 5; i++){
		for(j = 0; j < 2; j++){
			if(a[i][j] % 2 == 0)
				even += a[i][j];
			else
				odd += a[i][j];
		}
	}

	printf("偶数値の合計：%d, 奇数値の合計：%d\n",even,odd);
	return 0;
}
