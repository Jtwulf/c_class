#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int count_prime(int a[], int n, int count){
	int flag;
	if(n > 0){
		flag = 0;
		for(int i = 2; i < a[n-1]; i++){
			if(a[n-1] % i == 0){
				flag = 1;
			}
		}
		if(flag == 0)
			count++;
		n--;
		count_prime(a,n,count);
	} else {
		return count;
	}
}

int main(){
	int a[5];
	for(int i = 0; i < 5; i++){
		printf("%d番目の要素 -> ",i+1);
		scanf("%d",&a[i]);
	}
	int ans = count_prime(a,5,0);
	printf("%d\n",ans);
	return 0;
}
