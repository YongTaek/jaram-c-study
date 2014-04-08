#include <stdio.h>

int main(){
  int arr[8]={6,5,3,1,8,7,2,4};
  int i=0;
  int j;
  int l;
  int num=7;
  for(j=0;j<8;j++){
    for(i=0;i<num;i++){
      if(arr[i]>arr[i+1]){
	l=arr[i+1];
	arr[i+1]=arr[i];
	arr[i]=l;
      }
    }
    num--;
  }
  for(i=0;i<8;i++){
    printf("%d\n",arr[i]);
  }
  return 0;
}
