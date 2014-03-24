#include <stdio.h>

int main(){
  int i,j,k,l=0;
  int sum=1;
  int num=0;
  int n=0;

  printf("홀수 입력: ");
  scanf("%d",&num);
  n=num/2;
  if(num%2==0){
    printf("홀수를 입력하세요");
    return 0;
  }
  while(l<1){
    for(i=0;i<n+1;i++){
      for(j=i;j<n;j++){
	printf(" ");
      }
      printf("*");
      sum=sum+2;
      for(k=0;k<sum-4;k++){
	printf(" ");
      }
      if(i!=0){
	printf("*");
      }
      printf("\n");
      l++;
    }
  }
  sum=0;
  l=0;
  while(l<1){
    for(i=1;i<n+1;i++){
      for(j=0;j<i;j++){
	printf(" ");      
      }
      printf("*");
      sum=(num-4)-2*l;
      for(k=0;k<sum;k++){
	printf(" ");
      }
      if(i<num/2){
	printf("*");
      }
      printf("\n");
      l++;
    }
  }
  return 0;
}
