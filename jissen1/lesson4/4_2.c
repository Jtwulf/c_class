#include<stdio.h>
#include<string.h>

int str_comp(char str1[], char str2[]);

int main(){
	char str1[] = "justin";
	char str2[] = "Justin";
	printf("%d\n",str_comp(str1,str2));
	return 0;
}

int str_comp(char str1[], char str2[]){
     	int i;

        for(i = 0;(str1[i]) == (str2[i]);i++){	
		if((str1[i]) == '\0')
			return 0;
	}
	return (str1[i]) - (str2[i]);
} 
