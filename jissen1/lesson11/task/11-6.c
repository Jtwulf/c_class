#include<stdio.h>

struct complex_number {
	double imaginary_part;
	double real_part;
} data1, data2;

int main(){
	printf("<1つ目の複素数>\n");
	printf("実数部 = ");
	scanf("%lf",&data1.real_part);
	printf("虚数部 = ");
	scanf("%lf",&data1.imaginary_part);

	printf("<2つ目の複素数>\n");
	printf("実数部 = ");
	scanf("%lf",&data2.real_part);
	printf("虚数部 = ");
	scanf("%lf",&data2.imaginary_part);

	double real_part = data1.real_part + data2.real_part;
	double imaginary_part = data1.imaginary_part + data2.imaginary_part;

	if(data1.imaginary_part < 0){
		printf("(%3.2f%3.2fi) + ",data1.real_part,data1.imaginary_part);
	} else {
		printf("(%3.2f+%3.2fi) + ",data1.real_part,data1.imaginary_part);
	}
	if(data2.imaginary_part < 0){
		printf("(%3.2f%3.2fi) = ",data2.real_part,data2.imaginary_part);
	} else {
		printf("(%3.2f+%3.2fi) = ",data2.real_part,data2.imaginary_part);
	}
	if(data1.imaginary_part+data2.imaginary_part < 0){
		printf("(%3.2f%3.2fi)\n",real_part, imaginary_part);
	} else {
		printf("(%3.2f+%3.2fi)\n",real_part, imaginary_part);
	}

	return 0;
}
