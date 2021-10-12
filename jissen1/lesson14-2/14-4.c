#include<stdio.h>
#include<string.h>

char max_char(char s[]);

int main(){
	char str[30];
	printf("str -> ");
	scanf("%s",str);

	char upper[30], lower[30], number[30];
	int u = 0, l = 0, n = 0;
	for(int i = 0; i < strlen(str); i++){
		if('a' <= str[i] && str[i] <= 'z'){
			lower[l] = str[i];
			lower[l+1] = '\0';
			l++;
		}
		if('A' <= str[i] && str[i] <= 'Z'){
			upper[u] = str[i];
			upper[u+1] = '\0';
			u++;
		}
		if('0' <= str[i] && str[i] <= '9'){
			number[n] = str[i];
			number[n+1] = '\0';
			n++;
		}
	}

	printf("%c%c%c\n",max_char(upper),max_char(number),max_char(lower));
	return 0;
}

char max_char(char s[]){
	int mi = s[0];
	char max = s[0];
	for(int i = 0; i < strlen(s); i++){
		if(mi < s[i]){
			mi = s[i];
			max = s[i];
		}
	}
	return max;
}
