#include <stdio.h>

int main(){
  unsigned long num1=1,num2=1;
  unsigned long num3=0,num4=0;
  unsigned long i=3;
  unsigned long inputn;
  unsigned long result;
  scanf("%d",&inputn);
  num3=num1+num2;
  if(inputn==1){
    printf("1\n");
  }else if(inputn==2){
    printf("1\n");
}else if(inputn==3){
    printf("2\n");
}
  while(i<inputn){
    num4=num2+num3;
    num2=num3;
    num3=num4;
    result=num4;
    i++;
  }
  printf("%ld\n",result);
  return 0;
}
