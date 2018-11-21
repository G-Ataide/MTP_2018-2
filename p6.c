/* p6.c */
/* Gabriel Cardoso Mendes de Ataide */
/* 11811ECP008 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
	float x;
	float y;
} Ponto;

int main(){
	Ponto *p;
	int n, i;
	float angulo_var;
	scanf("%i", &n);getchar();
	p = (Ponto *)malloc(n*sizeof(Ponto));
	angulo_var = 2*M_PI/(n-1);
	for (i=0;i<n;i++)	{
		p[i].x = cos(i*angulo_var);
		p[i].y = sin(i*angulo_var);
		printf("(%.3f, %.3f) ", p[i].x, p[i].y);
	}
	free(p);
	return 0;
}
