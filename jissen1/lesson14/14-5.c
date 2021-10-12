#include<stdio.h>
#include<string.h>
#define N 30

void common_string(char s1[], char s2[], char *s3);

int main(){
	char str1[N], str2[N], str3[N];
	printf("str1 -> ");
	scanf("%s",str1);
	printf("str2 -> ");
	scanf("%s",str2);
	printf("str3 -> ");
	scanf("%s",str3);

	char s[N], *p = s;
	common_string(str1,str2,p);

	for(int i = 0; i < strlen(str3); i++){
		for(int j = 0; j < strlen(s); j++){
			if(str3[i] == s[j]){
				str3[i] = '_';
			}
		}
	}

	printf("%s\n",str3);
	return 0;
}

void common_string(char s1[], char s2[], char *s3){
	int len1 = strlen(s1), len2 = strlen(s2);
	for(int i = 0; i < len1; i++){
		for(int j = 0; j < len2; j++){
			if(s1[i] == s2[j]){
				*s3 = s1[i];
				s3++;
				break;
			}
		}
	}
}
