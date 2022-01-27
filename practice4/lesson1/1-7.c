#include<stdio.h>
#include<math.h>

int main(){
	int x[10], y[10];
	for(int i = 0; i < 10; i++){
		printf("x[%d] y[%d] => ",i,i);
		scanf("%d %d",&x[i],&y[i]);
	}

	int max_distance = 0, distance;
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			if(i != j){
				distance = sqrt((x[i]-x[j])*(x[i]-x[j]) + (y[i]-y[j])*(y[i]-y[j]));
				if(max_distance < distance)
					max_distance = distance;
			}
		}
	}

	printf("最も離れている2点の距離 : %d\n",max_distance);

	return 0;
}
