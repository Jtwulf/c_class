#include<stdio.h>
#include<string.h>

char max_char(char s[]);

int main(){
	char s[30];
	printf("s -> ");
	scanf("%s",s);
	char lower[30], upper[30], number[30];
	int u = 0, l = 0, n = 0;
	for(int i = 0; i < strlen(s); i++){
		if('0' <= s[i] && s[i] <= '9'){
			number[n] = (char)s[i];
			number[n+1] = '\0';
			n++;
		}
		if('a' <= s[i] && s[i] <= 'z'){
			lower[l] = (char)s[i];
			lower[l+1] = '\0';
			l++;
		}
		if('A' <= s[i] && s[i] <= 'Z'){
			upper[u] = (char)s[i];
			upper[u+1] = '\0';
			u++;
		}
	}

	printf("%c%c%c\n",max_char(upper),max_char(number),max_char(lower));
	return 0;
}

char max_char(char s[]){
	char max_c;
	int len = strlen(s), max = 0;
	for(int i = 0; i < len; i++){
		if(max < (int)s[i]){
			max = (int)s[i];
			max_c = s[i];
		}
	}
	return max_c;
}
