#include<stdio.h>

void main(){
	char a[11] = "abcdefghijk", *p;

	//作業1
	p = &a[4];
	printf("\np=&a[4]; 文を実行後：\n");           //実際に表示された値
	printf("pの値 = %p\n",p);                      //p = 0x7fff0dbf9430
	printf("Pが指している値 = %c\n\n", *p);        //*p = 30

	//作業2
	++p;
	printf("++p  :%p[ %c ]\n",p,*p);               //p=0x7fff0dbf9434 *p=35
	p++;
	printf("p++  :%p[ %c ]\n",p,*p);               //p=0x7fff0dbf9438, *p=40
	--p;
	printf("--p  :%p[ %c ]\n",p,*p);               //p=0x7fff0dbf9434, *p=35
	p--;
	printf("p--  :%p[ %c ]\n\n",p,*p);             //p=0x7fff0dbf9430, *p=30

	//作業3
	p=&a[0];
	printf("\np=&a[0]; 文を実行後：\n");
	printf("*(p+1):[ %c ]\n",*(p+1));              //*(p+1)=15
	printf("*(p+2):[ %c ]\n",*(p+2));              //*(p+2)=20
	printf("*(a+1):[ %c ]\n",*(a+1));              //*(a+1)=15
	printf("*(a+2):[ %c ]\n\n",*(a+2));            //*(a+2)=20

	//作業4
	p=&a[4];
	printf("\np=&a[4]; 文を実行後：\n");
	++(*p);
	printf("++(*p)  :%p[ %c ]\n",p,*p);            //p=0x7fff0dbf9430,*p=31
	(*p)++;
	printf("(*p)++  :%p[ %c ]\n",p,*p);            //p=0x7fff0dbf9430,*p=32
	--*p;
	printf("--*p  :%p[ %c ]\n",p,*p);              //p=0x7fff0dbf9430,*p=31
	*p--;
	printf("*p--  :%p[ %c ]\n",p,*p);              //p=0x7fff0dbf942c,*p=25

	//作業5
	p=&a[4];
	printf("\np=&a[4]; 文を実行後：\n");
	printf("式++(*p)を評価した結果 = %c\n",++(*p));//式++(p*)を評価した結果 =32
	printf("式(*p)++を評価した結果 = %c\n",(*p)++);//式(p*)++を評価した結果 =32
	printf("式--*pを評価した結果 = %c\n",--*p);    //式--p*を評価した結果 =32
	printf("式*p--を評価した結果 = %c\n",*p--);    //式p*--を評価した結果 =32 
}
