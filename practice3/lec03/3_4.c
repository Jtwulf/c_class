#include<stdio.h>
void print_10_leap_years(int n);
int main(){
	int year;
	printf("適当な西暦を入力して下さい：");
	scanf("%d",&year);
	print_10_leap_years(year);
	return 0;
}
void print_10_leap_years(int n){
	int i = 0;
	int leap_years[10];
	while(i < 10){ //10個表示するまでつづける
		if(n % 400 == 0 || (n % 4 == 0 && n % 100 != 0)){
			leap_years[i] = n;
			i++;
		}		
		n++;
	}
	int k;
	for(k = 0; k < 10; k++){
		printf("%d\t",leap_years[k]);
	}
	printf("\n");
}
