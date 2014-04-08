#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void InPutNumber(char *input);
void RandomNumber(int *random);
void Baseball(char *input,int *random);

int s=0,b=0,o=0;

int main(){
  char input[4];
  int random[4];
  InPutNumber(input);
  RandomNumber(random);
  Baseball(input,random);
  return 0;
}

void InPutNumber(char *input){
  int i;
  printf("세자리 수를 입력하세요: ");
  while(1){
    while(1){
      scanf("%s",input);
      for(i=0;i<3;i++){
	if((int)input[i]<49||(int)input[i]>57){
	  printf("숫자를 입력해주세요\n");
	  break;
	}
      }
      if((int)input[i]<49||(int)input[i]>57){
	break;}
    }
    if((int)input[0]!=(int)input[1]&&(int)input[1]!=(int)input[2]&&(int)input[0]!=(int)input[2]){
      break;
    }else{
      printf("세개 모두 다른 숫자로 다시 입력해 주세요: ");
    }
  }
}

void RandomNumber(int *random){
  int i;
  srand(time(NULL));
  while(1){
    for(i=0;i<3;i++){
      random[i]=rand()%10;
    }
    if(random[0]!=random[1]&&random[1]!=random[2]&&random[0]!=random[2])break;
  }
}

void Baseball(char *input,int *random){
  int i;
  int j;
  while(1){
    s=b=o=0;
    for(i=0;i<3;i++){
      for(j=0;j<3;j++){
	if((int)input[i]-48==random[j]){
	  if(i==j){s++;}else b++;
	}
      }
    }
    o=3-(s+b);
    if(s==3){
      printf("win\n");
      break;
    }else{
      printf("%ds %db %do\n",s,b,o);
      InPutNumber(input);
    }
  }
}
