#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


void printarray(int (*arr)[10]);
void lifegame(int (*arr)[10],int (*arr_count)[10]);

int main(){
  int i;
  int j;
  int k;
  int l;
  int arr[10][10]={0};
  int arr_count[10][10]={0};
    arr[3][4]=1;
    arr[5][4]=1;
    arr[4][4]=1;
    arr[4][5]=1;
    arr[4][3]=1;
  while(1){

    usleep(500000);
    //    sleep();
    system("clear");
    printarray(arr);
    lifegame(arr,arr_count);
  }
  return 0;
}


void printarray(int (*arr)[10]){
  int i;
  int j;
  for(i=0;i<10;i++){
    for(j=0;j<10;j++){
      printf("%d",arr[i][j]);
    }
    printf("\n");
  }
}

void lifegame(int (*arr)[10],int (*arr_count)[10]){
  int i;
  int j;
  int k;
  int l;
  for(i=0;i<10;i++){
    for(j=0;j<10;j++){
      if(arr[i][j]==1){
	for(k=i-1;k<i+2;k++){
	  for(l=j-1;l<j+2;l++){
	    arr_count[k][l]++;
	  }
	}
	arr_count[i][j]--;
      }
    }
  }
  for(i=0;i<10;i++){
    for(j=0;j<10;j++){
      if(arr[i][j]==1){
	if(arr_count[i][j]==2||arr_count[i][j]==3){
	  arr[i][j]=1;
	}else{arr[i][j]=0;}
      }else if(arr[i][j]==0){
	if(arr_count[i][j]==3){
	  arr[i][j]=1;
	}
      }
    }
  }
  for(i=0;i<10;i++){
    for(j=0;j<10;j++){
      arr_count[i][j]=0;
    }
  }
}
