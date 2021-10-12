#include<stdio.h>

int size_of_union(int n, int array1[], int array2[]);

int main(){
	int array1[] = {1,2,3};
	int array2[] = {2,3,4};
	printf("%d\n",size_of_union(3,array1,array2));

	return 0;
}

int size_of_union(int n, int array1[], int array2[]){
	int i, j, flag;
	int sum = n;
	for(i = 0; i < n; i++){
		int flag = 1;
		for(j = 0; flag == 1 && j < n; j++){
			if(array1[i] == array2[j]){
				flag = 0;
			}
		}
		sum += flag;
	}
	return sum;
}

