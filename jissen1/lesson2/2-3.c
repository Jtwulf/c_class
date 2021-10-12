#include<stdio.h>
int main(){
	int scrA[2];
	int scrB[2];

	printf("学生Aの英語の点数:");
	scanf("%d",&scrA[0]);
	printf("学生Aの数学の点数:");
	scanf("%d",&scrA[1]);
	printf("学生Bの英語の点数:");
	scanf("%d",&scrB[0]);
	printf("学生Bの数学の点数:");
	scanf("%d",&scrB[1]);

	double aveA = (scrA[0]+scrA[1])/2.0;
	double aveB = (scrB[0]+scrB[1])/2.0;

	int sumA = scrA[0]+scrA[1];
	int sumB = scrB[0]+scrB[1];

	double engAve = (scrA[0]+scrB[0])/2.0;
	double mathAve = (scrA[1]+scrB[1])/2.0;
	double ave = (sumA+sumB)/2.0;
	
	printf("\t英語\t数学\t合計\t平均\n");
	printf("学生A\t%d\t%d\t%d\t%4.1f\n",scrA[0],scrA[1],sumA,aveA);
	printf("学生B\t%d\t%d\t%d\t%4.1f\n",scrB[0],scrB[1],sumB,aveB);
	printf("平均\t%4.1f\t%4.1f\t%4.1f\n",engAve,mathAve,ave);
	return 0;
}
