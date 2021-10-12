#include<stdio.h>
#include<string.h>

int countLength(char array[]);
int last_index(char str1[], char str2[]);

int main(){
	char str1[] = "justin";
	char str2[] = "wulf";
	printf("%d\n",last_index(str1,str2));
	return 0;
}

int last_index(char str1[], char str2[]){
	int i, j, k, index = -1;
	for(i = 0; i < strlen(str1); i++){
		if(str1[i] == str2[0]){
			for(j = i; k = 0; str1[j] == str2[k]; j++, k++){
				if(str2[k] == '\0')
					index = i;
			}
		}
	}
	return index;
}

int countLength(char array[]){
	int i = 0;
	while(array[i] != '\0')
		i++;
	return i;
}
