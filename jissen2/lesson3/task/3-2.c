#include<stdio.h>

void bubble_sort(int arr[], int len){
	int buf;
	for(int i = 0; i < len-1; i++){
		for(int j = len-1; j > i; j--){
			if(arr[j] < arr[j-1]){
				buf = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = buf;
			}
		}
	}
}

//lower:探索開始位置 upper:探索終了位置 key:探索したい数
int bin_search(int arr[], int lower, int upper, int key){
	if(lower > upper)
		return -1;
	else if(arr[(lower+upper)/2] == key)
		return (lower+upper)/2;
	else if(arr[(lower+upper)/2] > key)
		bin_search(arr,lower,((lower+upper)/2)-1,key);
	else if(arr[(lower+upper)/2] < key)
		bin_search(arr,((lower+upper)/2)+1,upper,key);

}

int main(){
	int arr[10] = {5,3,8,17,6,9,4,1,10,15};
	int len = 10, key;
	bubble_sort(arr,len);
	for(int i = 0; i < len; i++) printf("%d,",arr[i]);
	printf("\n");
	printf("input key number -> ");
	scanf("%d",&key);
	printf("%d\n", bin_search(arr, 0, len, key));
	return 0;
}
