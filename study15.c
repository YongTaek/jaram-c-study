#include <stdio.h>

int main(){
  int i;
  int arr[132];
  int j=0;
  for(i=0;i<132;i++){
    arr[i]=i;
  }

  for(i=0;i<132/4;i++){
    if(arr[i]==131){
      printf("%d\n",i);
      break;
    }
    if(arr[i+132/4]==131){
      printf("%d\n",i+132/4);
      break;
    }
    if(arr[i+132/2]==131){
      printf("%d\n",i+132/2);
      break;
    }
    if(arr[i+132-132/4]==131){
      printf("%d\n",i+132-132/4);
      break;
    }
    j++;
  }
  printf("%d\n",j);
  return 0;
}
