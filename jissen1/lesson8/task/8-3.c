#include<stdio.h>
#include<math.h>

int main(){
	double coordinates[2][2];
	int i, j;

	//データの入力
	printf("x1:");
	scanf("%lf",&coordinates[0][0]);
	printf("y1:");
	scanf("%lf",&coordinates[0][1]);
	printf("x2:");
	scanf("%lf",&coordinates[1][0]);
	printf("y2:");
	scanf("%lf",&coordinates[1][1]);

	double line_length = sqrt(pow(coordinates[0][0]-coordinates[1][0],2)
			+pow(coordinates[0][1]-coordinates[1][1],2));
	printf("2点間の距離は、%3.1f\n",line_length);
	return 0;
}
