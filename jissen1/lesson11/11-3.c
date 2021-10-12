#include<stdio.h>
#include<string.h>

struct player_directory{
	char name[20];
	char national[20];
	int birthday;
	double height;
	double weight;
	int appearance;
	int goal;
	int assist;
	char explain[400];
} player1;

int main(){
	strcpy(player1.name,"Romeru Lukaku");
	strcpy(player1.national,"Belgium");
	player1.birthday = 19930513;
	player1.height = 191;
	player1.weight = 104;
	player1.appearance = 44;
	player1.goal = 30;
	player1.assist = 10;
	strcpy(player1.explain,"圧倒的なフィジカルとスピードを武器に、リーグでは24ゴールを挙げ、リーグ2位となる11アシストも記録し、チームの11年ぶりのスクデット奪還に大いに貢献。同シーズンのセリエAMVPに選出され、ミラノで充実したキャリアを送っている。");


	printf("name:%p,%ld\nnational:%p,%ld\nbirthday:%p,%ld\nheight:%p,%ld\nweight:%p,%ld\nappearance:%p,%ld\ngoal:%p,%ld\nassist:%p,%ld\nexplain:%p,%ld\n",&player1.name,sizeof(player1.name),&player1.national,sizeof(player1.national),&player1.birthday,sizeof(player1.birthday),&player1.height,sizeof(player1.height),&player1.weight,sizeof(player1.weight),&player1.appearance,sizeof(player1.appearance),&player1.goal,sizeof(player1.goal),&player1.assist,sizeof(player1.assist),&player1.explain,sizeof(player1.explain));

	return 0;
}
