#include<stdio.h>

int calc_avg(int arr[], int len){
	int sum = 0;
	for(int i = 0; i < len; i++)
		sum += arr[i];
	return sum / len;
}

int check_fail(int c[], int math[], int len){
	int c_avg = calc_avg(c,len);
	int math_avg = calc_avg(math,len);
	int count = 0;
	for(int i = 0; i < len; i++){
		if(c[i] < c_avg && math[i] < math_avg)
			count++;
	}
	return count;
}

int main(){
	int number;
	printf("学生数を入力 -> ");
	scanf("%d", &number);
	int c[number], math[number];
	for(int i = 0; i < number; i++){
		printf("c言語%d人目　-> ", i+1);
		scanf("%d",&c[i]);
	}
	for(int i = 0; i < number; i++){
		printf("数学%d人目　-> ", i+1);
		scanf("%d",&math[i]);
	}
	int fail = check_fail(c,math,number);
	printf("%d\n",fail);
	return 0;
}
