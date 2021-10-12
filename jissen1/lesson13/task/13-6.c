#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct complex_number {
	double imaginary_part;
	double real_part;
	struct complex_number *next;
} ccomplex;

ccomplex add_complex(ccomplex *pa, ccomplex *pb);

int main(){
	ccomplex *p1, *p2, *psum;
	while(1){
		p1 = malloc(sizeof(ccomplex));
		p2 = malloc(sizeof(ccomplex));
		psum = malloc(sizeof(ccomplex));

		printf("1つ目の複素数\n");
		printf("実数部=");
		scanf("%lf",&p1->real_part);
		printf("虚数部=");
		scanf("%lf",&p1->imaginary_part);

		printf("2つ目の複素数\n");
		printf("実数部=");
		scanf("%lf",&p2->real_part);
		printf("虚数部=");
		scanf("%lf",&p2->imaginary_part);

		if((p1->real_part == 0 && p1->imaginary_part == 0) || (p2->real_part == 0 && p2->imaginary_part == 0))
			break;

		*psum = add_complex(p1,p2);
		printf("(%4.2f%+4.2fi) + (%4.2f%+4.2fi)",p1->real_part,p1->imaginary_part,p2->real_part,p2->imaginary_part);
		printf(" = (%4.2f%+4.2fi)\n",psum->real_part,psum->imaginary_part);

		free(p1);
		free(p2);
		free(psum);
	}
	return 0;
}

ccomplex add_complex(ccomplex *pa, ccomplex *pb){
	ccomplex *psum;
	psum->real_part = pa->real_part + pb->real_part;
	psum->imaginary_part = pa->imaginary_part + pb->imaginary_part;
	return *psum;
}
