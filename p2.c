/* p2.c */
/* Gabriel Cardoso Mendes de Ataide */
/* 11811ECP008 */

#include <stdio.h>
// #include <math.h>

int eleva(int base,int expoente){
	int i, result=1;
	for (i=0;i<expoente; i++){
		result*=base;
	}
	return(result);
}

int bin_to_dec(char bin[]){
  int i,j=0,dec=0;
  for(i=0;bin[i]!='\0';i++);
  for(i--;i>=0;i--,j++){
    if(bin[i]=='1'){
			dec+=eleva(2,j);
		}
  }
  return dec;
}

int dec_to_bin(int dec,int bin[]){
	int i;
	for(i=0;dec>0;i++,dec/=2){
		bin[i]=dec%2;
	}
	return i;
}

int dec_to_oct(int dec,int oct[]){
	int i;
	for(i=0;dec>0;i++,dec/=8){
		oct[i]=dec%8;
	}
	return i;
}

int otc_to_dec(char oct[]){
  int i,j;
	long int dec=0;
	for(i=0;oct[i]!='\0';i++);
	for(j=0;i>0;i--,j++){
		dec+=((oct[i-1]-48)*(eleva(8,j)));
	}
  return dec;
}




int main(){
  unsigned int op,binario,hexa;
  scanf("%i",&op);
  if(op==1){
		//Binário para Decimal
		char bin[256];
    scanf("%s",bin);
    printf("%i\n",bin_to_dec(bin));
  }else if(op==2){
		//Binário para Hexadecimal
		char bin[256];
		scanf("%s",bin);
		printf("%lX\n",bin_to_dec(bin));
  }else if(op==3){
		//Hexadecimal para Decimal
		scanf("%x", &hexa);
		printf("%i", hexa);
  }else if(op==4){
		//Hexadecimal para Binário
		int bin[256],i,j;
		scanf("%x", &hexa);
		i = dec_to_bin(hexa,bin);
		for(i--;i>=0;i--){
			printf("%i",bin[i]);
		}
  }else if(op==5){
		//Decimal para Binário
		int dec,j,i=0,bin[256];
		scanf("%i",&dec);
		i = dec_to_bin(dec,bin);
		for(i--;i>=0;i--){
			printf("%i",bin[i]);
		}
  }else if(op==6){
		//Decimal para Hexadecimal
		int dec;
		scanf("%i",&dec);
		printf("%lX",dec);
  }else if(op==7){
		//Octal para Decimal
		int dec;
		char oct[256];
		scanf("%s",oct);
		printf("%i",otc_to_dec(oct));

  }else if(op==8){
		//Decimal para Octal
		int dec,oct[256],i;
		scanf("%i",&dec);
		i = dec_to_oct(dec,oct);
		for(i--;i>=0;i--){
			printf("%i",oct[i]);
		}
  }
}
