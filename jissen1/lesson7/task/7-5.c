#include<stdio.h>

void add_array(int *pa_start,int *pb_end, int *p_wa);

int main(){
	int array1[5] = {5,15,25,35,45}, array2[5] = {95,100,105,110,115};
	int array_wa[5];
	int *array1_ptr = array1, *array2_ptr = array2, *wa_ptr = array_wa;

	add_array(array1_ptr,array2_ptr,wa_ptr);
	return 0;
}

void add_array(int *pa_start,int *pb_end, int *p_wa){
	int i;
	for(i = 0; i < 5; i++){
		*(p_wa+i) = *(pa_start+i) + *(pb_end+(4-i));
		printf("a[%d]=%d,b[%d]=%d,wa[%d]=%d\n",i,*(pa_start+i),i,*(pb_end+(4-i)),i,*(p_wa+i));
	}
}
