#include<stdio.h>
#define N 1024

int is_engletter(char str){
	if(('a' <= str && str <= 'z') || ('A' <= str && str <= 'Z'))
		return 1;
	else
		return 0;
}


int remove_char(char *s){
	int i = 0;
	int j;
	int count = 0;
	while(s[i] != '\0'){
		if(is_engletter(s[i])){
			j = i;
			count ++;
			while(s[j] != '\0'){
				s[j] = s[j+1];
				j++;
			}
			i--;
		}
		i++;
	}
	return count;
}

int main(){
	char str[N];
	printf("input str -> ");
	fgets(str,N,stdin);
	int count = remove_char(str);
	printf("str:%s削除した文字数:%d\n",str,count);
	return 0;
}
