#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

struct user_info{
	char ID[20];
	int password;
} user_array[5];

void set_info(struct user_info *p);

int main(){
	struct user_info *p = user_array;
	for(int i = 0; i < 5; i++){
		set_info(p);
		p++;
	}

	char user_name[30];
	printf("検索したいユーザ名 >");
	scanf("%s",user_name);
	int flag = 0;
	for(int i = 0; i < 5; i++){
		if(strcmp(user_name,user_array[i].ID) == 0){
			printf("このユーザのパスワードは%dです\n",user_array[i].password);
			flag = 1;
		}
	}
	if(flag == 0)
		printf("このユーザの情報は存在しません\n");
	return 0;
}

void set_info(struct user_info *p){
	printf("ユーザIDを入力 > ");
	scanf("%s",p->ID);
	srand((unsigned)time(NULL));
	p->password = rand()%(9)*1000 + rand()%(9)*100 + rand()%(9)*10 + rand()%(9);
}
