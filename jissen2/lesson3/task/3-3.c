#include<stdio.h>

void int_to_str(int n, char** str){
	int i;
	if((i = n/10) != 0)
		int_to_str(i, str);
	**str = n % 10 + 48;
	(*str)++;
	**str = '\0';
}

int main(){
	int n = 1234;
	char str[5], *p = str;
	int_to_str(n,&p);
	printf("%s\n",str);
	return 0;
}
