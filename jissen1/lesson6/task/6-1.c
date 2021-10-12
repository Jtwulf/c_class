#include<stdio.h>

int str_to_asc(char str[]);
int countLength(char array[]);

int main(){
	char str1[100], str2[100];

	printf("2つの英小文字列を入力して下さい。\n");
	printf("1つ目：");
	fgets(str1,100,stdin);
	printf("2つ目：");
	fgets(str2,100,stdin);

	int str_asc1 = str_to_asc(str1);
	int str_asc2 = str_to_asc(str2);

	printf("%c%c\n",(char)str_asc1,(char)str_asc2);
	return 0;
}

int str_to_asc(char str[]){
	int sum = 0, i, len = countLength(str)-1; //lenは英小文字部分の要素数を格納

	for(i = 0; i < len; i++){
		if(97 <= str[i] && str[i] <= 122) //英子文字なら計算
			sum += (int)str[i];
	}
	return sum / len;
}

int countLength(char array[]){
	int i = 0;
	while(array[i] != '\0'){
		i++;
	}
	return i;
}
