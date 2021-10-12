#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 1024

int exist(char *p, char c);

int main(){
	char str1[20], str2[20];
	printf("str -> ");
	fgets(str1,20,stdin);

	char *p1 = str1;
	int len = strlen(str1);

	printf("%ld\n",strlen(str1));

	for(int i = 0, j = 0; i < len; i++){
		if(exist((p1+i),str1[i]) == 0){
			str2[j] = str1[i];
			j++;
		}
	}

	printf("%s\n",str2);
	return 0;
}

int exist(char *p, char c){
	for(int i = 1; i < '\n'; i++){
		if(*(p+i) == c)
			return 1;
	}
	return 0;
}
