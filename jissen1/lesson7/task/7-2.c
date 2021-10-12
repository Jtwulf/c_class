#include<stdio.h>

#define PI 3.14

int main(){
	double circle[10], *circle_ptr = circle;
	int i;

	for(i = 0; i < 10; i++){
		*(circle_ptr+i) = PI*(i+1)*(i+1);
		printf("%f\n",*(circle_ptr+i));
	}
	return 0; 
}
