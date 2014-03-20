#include <stdio.h>

void IsPrimeNumber(int num){
  int number[num][num];
  int number1[num][num];
  int i;
  int j;
  int n;
  int k=0;
  n=num/2;
  for(i=0;i<num;i++){
    for(j=0;j<num;j++){
      number[i][j]=0;
    }
  }
  for(i=0;i<num;i++){
    for(j=0;j<num;j++){
      number1[i][j]=1;
    }
  }
  for(i=0;i<num/2;i++){
    number[i][n-k]=1;
    number[i][n+k]=1;
    k++;
  }
  k=num-1;
  j=0;
  for(i=num/2;i<num;i++){
    number[i][k-j]=1;
    number[i][0+j]=1;
    j++;
  }
  for(i=0;i<num;i++){
    for(j=0;j<num;j++){
      if(number[i][j]==number1[i][j]){
	printf("*");
      }else{
	printf(" ");
      }
    }
    printf("\n");
  }
}
int main(){
  int num;
  printf("홀수를 입력하세요: ");
  scanf("%d",&num);
  if(num%2==0){
    printf("홀수를 입력하세요!\n");
    return 0;
  }
  IsPrimeNumber(num);
  return 0;
}
