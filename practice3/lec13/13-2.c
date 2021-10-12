#include<stdio.h>
#include<math.h>

typedef struct vertex {
	double x;
	double y;
} vvertex;

typedef struct triangle {
	vvertex v1;
	vvertex v2;
	vvertex v3;
} ttriangle;

int main(){
	ttriangle t = {{0,0},{6,0},{3,6}};
	double len_a = pow(pow(t.v2.x-t.v1.x,2)+pow(t.v2.y-t.v1.y,2),0.5);
	double len_b = pow(pow(t.v3.x-t.v2.x,2)+pow(t.v3.y-t.v2.y,2),0.5);
	double len_c = pow(pow(t.v1.x-t.v3.x,2)+pow(t.v1.y-t.v3.y,2),0.5);
	double s = (len_a+len_b+len_c) / 2;
	printf("%f\n",pow(s*(s-len_a)*(s-len_b)*(s-len_c),0.5));
	return 0;
}
