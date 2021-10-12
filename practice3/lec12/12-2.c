#include<stdio.h>
#include<string.h>

struct student {
	char name[32];
	int english_score;
	int math_score;
} s3;

struct student s1 = {
	"hiroshi",
	50,
	50,
};

struct student s2 = {
	"hiroyuki",
	60,
	70,
};

int main(){
	if(s1.english_score + s1.math_score > s2.english_score + s2.math_score){
		printf("a. %s\n",s1.name);
	} else {
		printf("a. %s\n",s2.name);
	}

	int len1 = strlen(s1.name), len2 = strlen(s2.name), len;
	if(len1 > len2)
		len = len2;
		else
		len = len1;

	for(int i = 0; i < len; i++){
		if(s1.name[i] > s2.name[i]){
			strcpy(s3.name,s1.name);
			break;
		} else if(s2.name[i] > s1.name[i]){
			strcpy(s3.name,s2.name);
			break;
		}
	}

	if(s1.english_score > s2.english_score){
		s3.english_score = s1.english_score;
	} else {
		s3.english_score = s2.english_score;
	}

	if(s1.math_score> s2.math_score){
		s3.math_score = s1.math_score;
	} else {
		s3.math_score = s2.math_score;
	}

	printf("b. %s %d %d\n",s3.name,s3.english_score,s3.math_score);

	return 0;
}
