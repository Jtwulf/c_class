#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct circle {
	double x;
	double y;
	double r;
};

int main(){
	struct circle c1 = {0,0,5};
	struct circle c2 = {15,15,2};

	if(c1.x-c1.r < c2.x-c2.r && c2.x+c2.r < c1.x+c1.r && c1.y-c1.r < c2.y-c2.r && c2.y+c2.r < c1.y+c1.r)
		printf("c1はc2を含む\n");
	if(c2.x-c2.r < c1.x-c1.r && c1.x+c1.r < c2.x+c2.r && c2.y-c2.r < c1.y-c1.r && c1.y+c1.r < c2.y+c2.r)
		printf("c1はc2に含まれる\n");
	if(pow(pow(c2.x-c1.x,2)+pow(c2.y-c1.y,2),0.5) < c1.r+c2.r)
		printf("c1とc2は重なる\n");
	else
		printf("c1とc2は離れている\n");
	return 0;
}
