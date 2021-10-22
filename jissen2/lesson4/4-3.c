#include<stdio.h>
#include<stdlib.h>

struct health {
	char name[30];
	double height;
	double sight[2];
};

int main(){
	struct health *p[5];
	for(int i = 0; i < 5; i++){
		p[i] = (struct health*)malloc(sizeof(struct health));
		printf("input health[%d].name -> ",i);
		scanf("%s",p[i]->name);
		printf("input health[%d].height -> ",i);
		scanf("%f",&p[i]->height);
		printf("input health[%d].sight(left) -> ",i);
		scanf("%f",&p[i]->sight[0]);
		printf("input health[%d].sight(right) -> ",i);
		scanf("%f",&p[i]->sight[1]);
	}
	return 0;
}
