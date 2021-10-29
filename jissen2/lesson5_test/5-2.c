#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main(){
	int buf;
	int *p1[10], *p2[10];
	int j = 0, k = 0;
	for(int i = 0; i < 10; i++){
		printf("%d番目の要素>",i+1);
		scanf("%d",&buf);
		if(buf % 2 == 0){
			p1[j] = (int *)malloc(sizeof(int));
			*p1[j] = buf;
			j++;
		} else {
			p2[k] = (int *)malloc(sizeof(int));
			*p2[k] = buf;
			k++;
		}
	}
	int p1_sum = 0, p2_sum = 0;
	for(int i = 0; i < j; i++){
		p1_sum += *p1[i];
	}
	double p1_avg = (double)p1_sum / (double)j;
	for(int i = 0; i < k; i++){
		p2_sum += *p2[i];
	}
	double p2_avg = (double)p2_sum / (double)k;

	printf("入力された偶数の平均値は：%f\n",p1_avg);
	printf("入力された奇数の平均値は：%f\n",p2_avg);
	free(*p1);
	free(*p2);
	return 0;
}
