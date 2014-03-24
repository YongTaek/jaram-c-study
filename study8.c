#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int s_c=0;
int b_c=0;
void FirstNumber(int* i,int* a,int* b,int* c){
  if(*i==*a){
    s_c++;
  }
  if(*i==*b){
    b_c++;
  }
  if(*i==*c){
    b_c++;
  }
}
void SecondNumber(int* j,int* a,int* b,int* c){
  if(*j==*a){
    b_c++;
  }
  if(*j==*b){
    s_c++;
  }
  if(*j==*c){
    b_c++;
  }
}
void ThirdNumber(int* k,int* a,int* b,int* c){
  if(*k==*a){
    b_c++;
  }
  if(*k==*b){
    b_c++;
  }
  if(*k==*c){
    s_c++;
  }
}

int main(){

  srand(time(NULL));
  int i = rand() % 10;
  int j = rand() % 10;
  int k = rand() % 10;
  int a=0,b=0,c=0;
  while(1){

  printf("숫자를 입력하세요(3개): ");
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  printf("%d %d %d\n",a,b,c);
  FirstNumber(&i,&a,&b,&c);
  SecondNumber(&j,&a,&b,&c);
  ThirdNumber(&k,&a,&b,&c);
  if(s_c==3){
    printf("정답\n");
    break;
  }else{
    printf("strike: %d,ball %d,out %d\n",s_c,b_c,3-s_c-b_c);
    s_c=0;
    b_c=0;
  }
  }
  return 0;
}
