#include<stdio.h>
int main(){
	double base = 1.5;
	double height = 2.1;
	double area = base*height/2;

	printf("底辺が%3.1fcmで高さが%3.1fcmの三角形の面積は、%fcmです。\n",base,height,area);
	return 0;
}
