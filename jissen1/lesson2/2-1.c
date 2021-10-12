#include<stdio.h>
int main(){
	double pi;
	printf("円周率の値を教えてください:");
	scanf("%lf",&pi);
	printf("円周率は:%fです。\n",pi);
	printf("円周率は:%6.4fです。\n",pi);
	printf("円周率は:%3.1fです。\n",pi);

	int ipi = pi;
	printf("円周率は:%3dです。\n",ipi);
	return 0;
}
