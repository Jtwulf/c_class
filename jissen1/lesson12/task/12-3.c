#include<stdio.h>
#include<math.h>

struct person {
	char name[30];
	int weight;
	double height;
	double BMI;
} data[10];

int main(){
	for(int i = 0; i < 10; i++){
		printf("name[%d] ->",i+1);
		scanf("%s",data[i].name);
		printf("weight[%d] ->",i+1);
		scanf("%d",&data[i].weight);
		printf("height[%d] ->",i+1);
		scanf("%lf",&data[i].height);
		data[i].BMI = data[i].weight / pow(data[i].height,2) ;
		printf("%f\n",data[i].BMI);
	}
	return 0;
}
