#include<stdio.h>
void draw_line(int n);

int main(){
	int x,y;
	printf("長方形の横幅と高さを入力してください\n");
	printf("横幅:");
	scanf("%d",&x);
	printf("高さ:");
	scanf("%d",&y);

	int i;
	for(i = 1; i <= y; i++){
		draw_line(x);
	}
	return 0;
}


void draw_line(int n){
	while(n > 0){
		printf("*");
		n--;
	}
	printf("\n");
}
