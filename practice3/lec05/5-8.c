#include<stdio.h>
#include<string.h>

int index_of(char s1[], char s2[]);

int main(){
	char s1[] = "disclosure";
	char s2[] = "sure";
	printf("%d\n",index_of(s1,s2));
       	return 0;
}

int index_of(char s1[], char s2[]){
	int point = -1, flag;
	int i, j, k;
	for(i = 0; i < strlen(s1); i++){
		if(s1[i] == s2[0]){
			for(j = i, k = 0; s1[j] == s2[k]; j++, k++){
				if(s2[k] == '\0')
					point = i;
			}
		}
	}
	return point;
}
