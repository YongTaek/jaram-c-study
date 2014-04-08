#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int i;
  int j=1;
  int k;
  int arr[100]={0};
  srand(time(NULL));

    for(i=0;i<100;i++){
      arr[i]=rand() %100;
    }
  printf("%d\n",arr[56]);
  printf("숫자를 입력하세요");
  scanf("%d",&k);
  for(i=0;i<25;i++){
    printf("%d\n",j);
    if(arr[i]==k){
      printf("%d\n",i+1);
      return 0;
    }
    j++;
  }
  for(i=50;i<75;i++){
    printf("%d\n",j);
    if(arr[i]==k){
      printf("%d\n",i+1);
      return 0;
    }
    j++;
  }
  for(i=25;i<50;i++){
    printf("%d\n",j);
    if(arr[i]==k){
      printf("%d\n",i+1);
      return 0;
    }
    j++;
  }
  for(i=75;i<100;i++){
    printf("%d\n",j);
    if(arr[i]==k){
      printf("%d\n",i+1);
      return 0;
    }
    j++;
  }
  return 0;
}
