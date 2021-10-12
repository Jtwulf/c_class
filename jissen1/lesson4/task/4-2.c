#include<stdio.h>

void draw_line(char moji, int n);

int main(){
	int width, height;
	printf("平行四辺形の横幅：");
	scanf("%d",&width);
	printf("平行四辺形の高さ：");
	scanf("%d",&height);

	while(height-- > 0){
		draw_line('  ',height);
		draw_line('*',width);
		printf("\n");
	}
	return 0;
}

void draw_line(char moji, int n){
	while(n-- > 0)
		printf("%c",moji);
}
