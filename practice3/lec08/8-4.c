#include<stdio.h>

char* longer_str(char *s1, char *s2);
int str_len(char *s);

int main(){
	char s1[] = "abc", s2[] = "defg";
	if(longer_str(s1,s2) == s1)
		printf("%s\n",s2);
	else {
		printf("%s\n",s1);
	}

	return 0;
}

char* longer_str(char *s1, char *s2){
	int len1 = str_len(s1), len2 = str_len(s2);
	if(len1 > len2)
		return s1;
	else
		return s2;
}

int str_len(char *s){
	int len = 0;
	while(*s++){
		len++;
	}
	return len;
}
