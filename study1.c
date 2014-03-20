#include <stdio.h>

int main(){
  int i;
  int j;
  int k;
  int num;
  int n = 0;

  printf("수를 입력하세요: ");
  scanf("%d",&num);
  for(i=1;i<num;i++){
    for(j=num-n-1;j>0;j--){
      printf(" ");
    }
    for(k=0;k<i;k++){
      printf("*");
  }
    for(k=0;k<i-1;k++){
      printf("*");
    }
    printf("\n");
    n++;
  }
  for(i=0;i<num;i++){
    for(j=0;j<i;j++){
      printf(" ");
    }
    for(k=i;k<num;k++){
      printf("*");
    }
    for(k=i;k<num-1;k++){
      printf("*");
    }
    printf("\n");
  }
  return 0;
}

