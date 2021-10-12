#include<stdio.h>

struct leap_year {
	int year;
	int leap;
};

int main(){
	struct leap_year data;
	printf("西暦の年号を入力して下さい> ");
	scanf("%d",&data.year);

	if(data.year % 400 == 0 || (data.year % 4 == 0 && data.year % 100 != 0))
		data.leap = 1;
	else
		data.leap = 0;

	if(data.leap == 1)
		printf("%d年は閏年です\n",data.year);
	else
		printf("%d年は閏年ではありません\n",data.year);

	return 0;
}
