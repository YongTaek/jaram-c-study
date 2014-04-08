#include <stdio.h>
#include <string.h>

int main(){
  char a[5];
  char b[5];
  scanf("%s",a);
  printf("%s\n",a);
  strcpy(b,a);
  printf("%s",b);
  return 0;
}
