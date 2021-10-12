#include<stdio.h>
#include<math.h>

struct person {
	char name[20];
	double height;
	double weight;
} persons[5];

int main(){
	for(int i = 0; i < 5; i++){
		printf("persons[%d].name -> ",i);
		scanf("%s",persons[i].name);
		printf("persons[%d].height -> ",i);
		scanf("%f",&persons[i].height);
		printf("persons[%d].weight -> ",i);
		scanf("%f",&persons[i].weight);
	}

	int max_height_index = 0;
	int min_weight_index = 0;
	double max_BMI = 0;
	int max_BMI_index = 0;

	for(int i = 0; i < 5; i++){
		if(persons[max_height_index].height < persons[i].height)
			max_height_index = i;
		if(persons[min_weight_index].weight > persons[i].weight)
			min_weight_index = i;
		if(max_BMI < persons[i].weight / pow(persons[i].height,2)){
			max_BMI = persons[i].weight / pow(persons[i].height,2);
			max_BMI_index = i;
		}
	}

	printf("%s\n",persons[max_height_index].name);
	printf("%s\n",persons[min_weight_index].name);
	printf("%s\n",persons[max_BMI_index].name);

	return 0;
}
