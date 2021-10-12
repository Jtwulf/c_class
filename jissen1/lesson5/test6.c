#include<stdio.h>

void show(int start, int end, char letters[]);
int countLength(char letters[]);

int main(){
	char str[80];
	int n;
	printf("半角文字列strを入力：");
	fgets(str,80,stdin);
	printf("strの長さより小さい自然数を入力；");
	scanf("%d",&n);

	int len = countLength(str);

	printf("先頭からn番目までの部分文字列は：");
	show(0,n,str);
	printf("\n");
	printf("n+1番目から末尾までの部分文字列は：");
	show(n,len,str);
	return 0;
}

void show(int start, int end, char s[]){
	int i;
	for(i = start; i < end; i++){
		printf("%c",s[i]);
	}
}

int countLength(char letters[]){
	int i = 0;
	while(letters[i] != '\0')
		i++;
	return i;
}

