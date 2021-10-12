#include<stdio.h>
int main(){
	int x,y,flag;
	for(x=2, x <= 50, x++){
		flag = 0;
		for(y=2, y<=x-1; y++){
			if(x % y == 0){
				flag++;
			}
		}
		if(flag==0){

		}
	} 
}

