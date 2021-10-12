#include<stdio.h>
int main(){
	int no1, no2, no3, no4;

	printf("2進数入力\n");
	printf("1桁目：");
	scanf("%d",&no1);
	printf("2桁目：");
	scanf("%d",&no2);
	printf("3桁目：");
	scanf("%d",&no3);
	printf("4桁目：");
	scanf("%d",&no4);

	printf("%d%d%d%d(2進数)=%d*2_3+%d*2_2+%d*2_1+%d*2_0= ",no4,no3,no2,no1,no4,no3,no2,no1);

	int ans = no4*8+no3*4+no2*2+no1;
	printf("%d(10進数)\n",ans);

	return 0;
}
