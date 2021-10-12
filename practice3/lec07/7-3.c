#include<stdio.h>
#include<math.h>
#include<string.h>

int get_max_idx(char str[]);
double get_avg(char str[]);
int get_min_idx(char str[]);

int main(){
	char str[1024];

	scanf("%s",str);

	printf("%p,%p,%p,%p\n",&str[0],&str[strlen(str)-1],&str[get_max_idx(str)],&str[get_min_idx(str)]);
	return 0;
}

int get_max_idx(char str[]){
	int i, maxIdx;
	maxIdx = 0;

	for(i = 0; str[i] != '\0';i++){
		if(str[maxIdx] < str[i]){
			maxIdx = i;
		}
	}
	return maxIdx;
}

double get_avg(char str[]){
	int i;
	double sum = 0.0;

	for(i = 0; str[i] != '\n'; i++){
		sum += str[i];
	}
	return sum / i;
}

int get_min_idx(char str[]){
	int i, minIdx;
	double avg = get_avg(str);

	minIdx = 0;
	if(fabs(str[minIdx]-avg) > fabs(str[i]-avg)){
		minIdx = i;
	}
	return minIdx;
}
