#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int sum_ascii(char* str, int i, int sum){
	if(str[i] != '\0'){
		sum += (int)str[i];
		i++;
		sum_ascii(str,i,sum);
	} else {
		return sum;
	}
}

int main(){
	char str[50];
	printf("文字列stringを入力>");
	scanf("%s",str);
	double avg = (double)sum_ascii(str,0,0) / (double)strlen(str);

	printf("stringに含まれる全て文字の平均asciiコードは");
	printf("%fです\n",avg);
	return 0;
}
