#include<stdio.h>
int main(){
	printf("記号\t意味\n");
	printf("\\n\t改行を出力\n");
	printf("\\t\tタブを出力\n");
	printf("%%%%\t%%を出力\n");
	printf("\\\"\t\"を出力\n");
	printf("\\r\t同じ行の戦闘に戻る\n");
	printf("\\b\t1文字分戻る\n");
	printf("\\x1b[2J\t画面のクリア\n");
	return 0;
}
