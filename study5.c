#include <stdio.h>
int abs(int i){
  if(i>0){
    return i;
  }
  else if(i<0){
    return -i;
  }
  else return 0;
}

int main(){
  int i,j,k=7;
  int n=0;
  int num;
  for(i=-(k-1);i<k;i++){
    for(j=abs(i);j>0;j--){
      printf(" ");
    }
    for(j=1;j<2*(k-abs(i));j++){
      printf("*");
  }
    printf("\n");
  }
 return 0;
}
