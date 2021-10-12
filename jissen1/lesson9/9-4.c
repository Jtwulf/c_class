#include<stdio.h>

int mygetstrc(char *a, char k);
void mystrparts(char *a, char *r, char p1, char p2);

int main(){
	char s[] = "abcdefad", r[20] = "";
	printf("%s 文字列の%c は%d 番目である。\n",s,'d',mygetstrc(s,'d'));
	mystrparts(s,r,'b','a');
	printf("%s 文字列の%cと%cの間文字列は%sである。\n",s,'b','a',r);
	return 0;
}

int mygetstrc(char *a, char k){
	int i = 1;
	while(k != *a++
		i++;
	return i;
}

void mystrparts(char *a, char *r, char p1, char p2){
	int i, j, k;
	i = mygetstrc(a,p1);
	j = mygetstrc(a+i,p2);

	for(k = 0; k < j-1; k++){
		*r++ = *(a+i+k);
	}
	r = '\0';
}
