#include<stdio.h>

void delete(char s1[], char s2[]);
int countLength(char str[]);

int main(){
	char str1[100], str2[100];
	
	printf("str1:");
	fgets(str1,100,stdin);
	printf("str2:");
	fgets(str2,100,stdin);

	int i, len = countLength(str1);
	delete(str1,str2);
	
	printf("str1からstr2に含まれていない文字を全て取り除いた結果、");
	for(i = 0; i < len; i++){
		printf("%c",str1[i]);
	}
	printf("になる。\n");
	return 0;
}

void delete(char s1[], char s2[]){
	int i, j, len1 = countLength(s1), len2 = countLength(s2);
	int dup;
	for(i = 0; i < len1; i++){
		dup = 0;
		for(j = 0; j < len2; j++){
			if(s2[j] == s1[i])
				dup ++;
		}
		if(dup == 0)
			s1[i] = '\0';
	}
}

int countLength(char str[]){
	int i = 0;
	while(str[i] != '\0')
		i++;
	return i;
}
