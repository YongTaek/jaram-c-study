#include <stdio.h>

int main(){
  int i,j,k;
  int sum=-1;
  for(i=0;i<5;i++){
    for(j=i;j<2;j++){
      sum=sum+2;
      printf(" ");
      if(j==1){
	printf("*");
      }
      for(k=0;k<sum-4;k++){
	printf(" ");
	if(k==sum-5&&i>0){
	  printf("*");
	}
      }
    }
    printf("\n");
  }
  return 0;
}
