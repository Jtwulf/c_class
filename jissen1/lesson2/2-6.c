#include<stdio.h>

int month2day(int x);

int main(void){
	int x;
	while(x != 0){
		printf("何月？:");
		scanf("%d",&x);
		int day = month2day(x);

		if(day == -1){
			printf("入力間違い\n");
			continue;
		} else if (day == 0){
			break;
		}
	
		printf("%d日\n",day);
	}
	return 0;
}

int month2day(int x){
	switch(x){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return 31;
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
		case 2:
			return 28;
		case 0:
			return 0;
		default:
			return -1;
	}
}
