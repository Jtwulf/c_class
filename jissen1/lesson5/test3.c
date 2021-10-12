#include<stdio.h>

int main(){
	int data[5];
	int i;
	for(i = 0; i < 5; i++){
		printf("%dつ目の要素：",i+1);
		scanf("%d",&data[i]);
	}
	int j,max = data[0],min = data[0];
	for(j = 0; j < 5; j++){
		if(max < data[j])
			max = data[j];
		if(min > data[j])
			min = data[j];
	}
	printf("最大値%d,最小値%d\n",max,min);
	return 0;
}
