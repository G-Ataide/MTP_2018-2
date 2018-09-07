#include <stdio.h>
int main(){
  char bits_in[256]={0};
  char bits[256]={0};
  int h=0,j=0,i=0,estado=0;
  scanf("%s",bits_in);
  for(;bits_in[h]!='\0';h++){
    if((bits_in[h]=='0')||(bits_in[h]=='1')){
      bits[j] = bits_in[h];
      j++;
    }
  }
  for(;bits[i]!='\0';i++){
    if(estado==0){
      if(bits[i]=='1'){
        estado=1;
      }
    }else if(estado==1){
      if(bits[i]=='1'){
        estado=0;
      }else if(bits[i]=='0'){
        estado=2;
      }
    }else if(estado==2){
      if(bits[i]=='0'){
        estado=1;
      }
    }
  }
  if(estado==0 && i>=1){
    printf("\"%s\" eh multiplo de 3",bits);
  }else if((estado==1 || estado==2) && i>=1){
    printf("\"%s\" nao eh multiplo",bits);
  }

}
