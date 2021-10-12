#include<stdio.h>

int main(){
	char lowerCase[] = "abcdefghijklmnopqrstuvwxyz";
	char upperCase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i,j;


	printf("--小文字--\n");
	for(i = 0; i < 26; i++){
		printf("%c = %3d\t",lowerCase[i],lowerCase[i]);
	}

	printf("--大文字--\n");
	for(i = 0; i < 26; i++){
		printf("%c = %3d\t",upperCase[i],upperCase[i]);
	}

	return 0;
}
