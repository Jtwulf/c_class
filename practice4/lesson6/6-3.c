#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

void recursive_print(char* str, int i){
	if(str[i] != '\0'){
		if('0' <= str[strlen(str)-i] && str[strlen(str)-i] <= '9')
			printf("%c",str[strlen(str)-i]);
		i++;
		recursive_print(str,i);
	} else {
		if('0' <= str[strlen(str)-i] && str[strlen(str)-i] <= '9')
			printf("%c",str[strlen(str)-i]);
		return;
	}
}

int main(){
	char str[50];
	printf("input str -> ");
	fgets(str,50,stdin);
	str[strlen(str)-1] = '\0';
	recursive_print(str,0);
	printf("\n");
	return 0;
}
