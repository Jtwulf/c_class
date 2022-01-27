#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main(){
	int num1, num2, count = 0;
	printf("整数配列int_array1の要素数を入力 -> ");
	scanf("%d",&num1);
	printf("整数配列int_array2の要素数を入力 -> ");
	scanf("%d",&num2);

	int *int_array1, *int_array2;

	int_array1 = (int *)malloc(sizeof(int) * num1);
	int_array2 = (int *)malloc(sizeof(int) * num2);

	printf("整数配列int_array1を入力\n");
	for(int i = 0; i < num1; i ++){
		printf("%d番目の要素 -> ", i+1);
		scanf("%d",(int_array1+i));
		for(int j = 2; j <= *(int_array1+i); j++){
			if(*(int_array1+i) == j)
				count ++;
			if(*(int_array1+i) % j == 0)
				break;
		}
	}
	printf("整数配列int_array2を入力\n");
	for(int i = 0; i < num2; i ++){
		printf("%d番目の要素 -> ", i+1);
		scanf("%d",(int_array2+i));
		for(int j = 2; j <= *(int_array2+i); j++){
			if(*(int_array2+i) == j)
				count++;
			if(*(int_array2+i) % j == 0)
				break;
		}
	}

	int *int_array3 = (int*)malloc(sizeof(int)*count);
	int k = 0;

	printf("整数配列int_array1とint_array2にある素数のみ抽出した配列は : ");

	for(int i = 0; i < num1; i++){
		count = 0;
		for(int j = 2; j < int_array1[i]; j++){
			if(int_array1[i] % j == 0)
				count ++;
		}
		if(count == 0){
			int_array3[k] = int_array1[i];
			printf("%d ",int_array3[k]);
			k++;
		}
	}
	for(int i = 0; i < num2; i++){
		count = 0;
		for(int j = 2; j < int_array2[i]; j++){
			if(int_array2[i] % j == 0)
				count ++;
		}
		if(count == 0){
			int_array3[k] = int_array2[i];
			printf("%d ",int_array3[k]);
			k++;
		}
	}
	printf("\n");

	free(int_array1);
	free(int_array2);
	free(int_array3);
	return 0;
}
