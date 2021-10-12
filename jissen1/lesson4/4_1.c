#include<stdio.h>
#include<string.h>

void srt_cat(mojis1,mojis2);

int main(){
	char mojis1[] = "justin";
	char mojis2[] = "wulf";

	str_cat(mojis1,mojis2);
	return 0;
}

void str_cat(char mojis1[], char mojis2[]){
	int i, j;

	for(i = 0; mojis1[i] != '\0'; i++){
	}
	for(j = 0; mojis2[j] != '\0'; j++){
		mojis1[i+j] = mojis2[j];
	}

	mojis1[i+j] = '\0';
	printf("%s\n",mojis1);
}
