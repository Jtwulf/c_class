#include<stdio.h>

/* the argument "i" must be declared as 0 */
int student_age(int n, int i){
	if(n == 1) return i + 10;
	else {
		n--;
		i += 2;
		student_age(n,i);
	}
}

int main(){
	int n;
	printf("何人目の学生: ");
	scanf("%d",&n);
	printf("この学生の年齢は:%d\n",student_age(n,0));
	return 0;
}
