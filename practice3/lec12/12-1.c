#include<stdio.h>

struct student {
	char family_name[30];
	char first_name[30];
	int year;
};

struct student s = {
	"秋山",
	"竜二",
	2001,
};

int main(){
	printf("%s %s %d\n",s.family_name,s.first_name,s.year);
	return 0;
}
