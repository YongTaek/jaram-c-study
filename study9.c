#include <stdio.h>
double x,y;
double add(x,y){
  return x+y;
}
double division(x,y){
  return x/y;
}
double multiplication(x,y){
  return x*y;
}
double subtraction(x,y){
  return x-y;
}
int main(){
  char operater;
  double a,b;
  double result;
  printf("연산자를 선택하세요: ");
  scanf("%c",&operater);
  printf("\n");
  printf("계산하고 싶은 수 두 개를 입력하세요: ");
  scanf("%lf",&a);
  scanf("%lf",&b);
  printf("\n");

  if(operater=='+'){
    result=add(a,b);
  }else if(operater=='-'){
    result=subtraction(a,b);
  }else if(operater=='*'){
    result=multiplication(a,b);
  }else if(operater=='/'){
    result=division(a,b);
  }else{
    printf("올바른 연산자와 수를 입력하세요\n");
  } 
  printf("%lf",result);
 return 0;
}
