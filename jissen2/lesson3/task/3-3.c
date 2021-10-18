#include<stdio.h>

//int型の数字の桁数を引数iに設定する必要あり
void int_to_str(int n, char str[], int i){
	str[--i] = (n%10) + 48;
	if(i == -1) return;
	int_to_str(n/10,str,i);
}

int main(){
	int n = 1234;
	char str[4];
	int_to_str(n,str,4);
	printf("%s\n",str);
	return 0;
}
