/* p4.c */
/* Gabriel Cardoso Mendes de Ataide */
/* 11811ECP008 */
#include <stdio.h>

int ackermann(int m, int n){
  if(m==0){return n+1;}
  if(n==0){ackermann(m-1,1);}
  if(n>0){ackermann(m-1,ackermann(m,n-1));}
}

int main(){
  int m,n;
  scanf("%i %i",&m,&n);
  printf("%i",ackermann(m,n));
}
