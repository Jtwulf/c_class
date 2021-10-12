#include<stdio.h>

#define N 1024

void convert_str(char *str){
	while(*str != '\0'){
		if(*str != ' '){
			if('A' <= *str && *str < 'X')
				*str += 35;
			else if('X' <= *str && *str <= 'Z')
				*str += 9;
			else if('a' <= *str && *str <= 'z')
				*str -= 29;
		}
		str++;
	}
}

int main(){
        char str[N], *str_p = str;
        printf("input str -> ");
	fgets(str,N,stdin);
	convert_str(str_p);
	printf("%s",str_p);
        return 0;
}
