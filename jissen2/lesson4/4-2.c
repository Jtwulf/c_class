#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char str1[] = "Guy";
	char str2[] = "Disclosure";
	printf("%sと%sを結合すると、\n",str1,str2);
	char *str3 = (char *)malloc(sizeof(char) * i);
	if(str3 == NULL){
		printf("メモリーが確保出来ませんでした\n");
		return 0;
	}
	str3 = strcat(str1,str2);
	printf("%sとなる\n",str3);
	return 0;
}
