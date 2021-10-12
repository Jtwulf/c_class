#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 1024

double str_ave(char str[]);

int main(){
	char str[N];
	scanf("%s",str);

	int len = strlen(str), near_index = 0;
	double ave = str_ave(str);

	int ascii;
	if(ave - (int)ave < 0.5){
		ascii = ave;
	} else{
		ascii = ave + 1;
	}

	printf("%sの各文字の文字コードの平均値と最も近い文字は：%cです。\n",str,ascii);
	return 0;
}

double str_ave(char str[]){
	int len = strlen(str);
	double sum = 0, ave;
	for(int i = 0; i < len; i++){
		sum += str[i];
	}
	ave = sum / len;
	return ave;
}
