#include<stdio.h>
#include<string.h>

void print_shortest_string(int n);
int countLength(char array[]);

int main(){
	int n;
	scanf("%d",&n);
	print_shortest_string(n);
	return 0;
}

void print_shortest_string(int n){
	int i;
	char min[1000];
	char buf[1000];

	scanf("%s",min);
	for(i = 1; i < n; i++){
		scanf("%s",buf);
		if(strlen(min) > strlen(buf)){
			strcpy(min,buf);
		}
	}
	printf("%s\n",min);
	return;
}

int countLength(char array[]){
	int i;
	while(array[i] != '\0')
		i++;
	return i;
}

