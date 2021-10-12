#include<stdio.h>
#include<string.h>

struct sight{
	char name[20];
	double left;
	double right;
} s1,s2;

int main(){
	char name[20];
	double left,right;

	printf("<s1>\n");
	printf("name -> ");
	scanf("%s",s1.name);
	printf("left -> ");
	scanf("%lf",&s1.left);
	printf("right -> ");
	scanf("%lf",&s1.right);

	printf("<s2>\n");
	printf("name -> ");
	scanf("%s",s2.name);
	printf("left -> ");
	scanf("%lf",&s2.left);
	printf("right -> ");
	scanf("%lf",&s2.right);

	if(s1.left + s1.right > s2.left + s2.left){
		printf("%s\n",s1.name);
	} else {
		printf("%s\n",s2.name);
	}

	return 0;
}
