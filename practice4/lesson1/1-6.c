#include<stdio.h>
#include<stdbool.h>

int main(){
	int list[10], buf, i = 0;
	bool flag;
	while(i < 10){
		printf("list[%d] => ",i);
		scanf("%d", &buf);
		flag = true;
		for(int j = 0; j < i; j++){
			if(buf == list[j])
				flag = false;
		}
		if(flag){
			list[i] = buf;
			i++;
		}
	}

	for(int i = 0; i < 10; i++){
		printf("%d, ",list[i]);
	}
	printf("\n");

	return 0;
}
