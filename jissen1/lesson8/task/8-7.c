#include<stdio.h>
#include<string.h>

int mygetstrc(char *a, char k);
void mystrparts(char a[], char r[], char p1, char p2);

int main(){
	char s[] = "abcdefad", r [20] = "";
	printf("%s 文字列の%c は%d 番目である。\n",s,'d',mygetstrc(s,'d'));
	mystrparts(s,r,'b','a');
	printf("%s 文字列の%cと%cの間文字列は%sである。\n",s,'b','a',r);
	return 0;
}

int mygetstrc(char *a, char k){
	int i, len = strlen(a);
	for(i = 0; i < len; i++){
		if(*(a+i) == k){
			return i+1;
		}
	}
	return -1;
}

void mystrparts(char *a, char *r, char p1, char p2){
	int i, j, k = 0, len = strlen(a);
	int start, end;

	for(i = 0; i < len; i++){
		if(mygetstrc(a,p1) != -1 && mygetstrc(a,p2) != -1){

			if(mygetstrc(a,p1) < mygetstrc(a,p2)){
				start = mygetstrc(a,p1);
				end = mygetstrc(a,p2);
			} else {
				start = mygetstrc(a,p2);
				end = mygetstrc(a,p1);
			}

			for(j = start+1; j < end; j++, k++){
				*(r+k) = *(a+j-i);
			}
		}
		a++;
	}
}
