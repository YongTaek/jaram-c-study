#include <stdio.h>
#include <stdlib.h>

struct Elf {
  int type_code;
  int level;
  int x;
  int y;
  int z;
};

struct Human {
  int type_code;
  int level;
  int x;
  int y;
  int z;
};

int getA(int x) {
  return x + 1;
}

int getA2(int* x) {
  return *x + 1;
}

long getB(long x) {
  return x + 2;
}

float getC(float x) {
  return x + 1.1f;
}

double getD(double x) {
  return x + 1.111;
}

char getE() {
  return 'z';
}

void get_sum_and_product(int x, int y, int* sum, int* product) {
  *sum = x + y;
  *product = x * y;
}

int main() {
  // data types
  int x = 1;
  int a = getA2(&x);
  long b = getB(10);
  float c = getC(1.1f);
  double d = getD(1.111);
  char e = getE();
  int salary = 10000;
  int array_of_salary[100];
  int index = 0;

  int* dynamic = malloc(x * sizeof(int));
  printf("dynamic : %p\n", dynamic);

  int sum = 0;
  int product = 0;
  get_sum_and_product(2, 3, &sum, &product);
  
  for (index = 0; index < 100; index++) {
    array_of_salary[index] = 0;
  }
  index = 0;

  // calculation
  int aaa = 1 + 1;
  long bbb = 11 + 11;
  float ccc = 1.1f + 1.1f;
  double ddd = 1.111 + 1.111;

  // struct
  struct Elf f;
  f.level = 1;
  f.x = 10;
  struct Human g;
  g.level = 1;
  g.x = 1;

  // pointers
  int* aa = &a; // address of int
  long* bb = &b; // address of long
  float* cc = &c; // address of float
  double* dd = &d; // address of double
  char* ee = &e; // address of char

  // pointers of pointer of pointer
  int** paa = &aa;

  // if
  if (salary < 3000) {
    salary = salary * 0.95;
  } else if (salary == 3000) {
    salary = salary * 0.7;
  } else {
    salary = salary * 0.5;
  }

  // for
  int sigma = 0;
  for (index = 1; index < 101; index = index + 1) {
    sigma = sigma + index;
  }

  // while
  int max = 100;
  while (max < 100) {
    max = max + 1;
  }
  max = 0;

  // do - while
  do {
    max = max + 1;
  } while(max < 100);

  printf("number : %d %ld %f %f %c\n", a, b, c, d, e);
  printf("Elf level : %d\n", f.level);
  printf("pointers : %p %p %p %p %p\n", &a, &b, &c, &d, &e);
  printf("pointer : %p\n", aa);
  printf("pointer to pointer : %p\n", &aa);
  printf("pointer to pointer : %p\n", paa);

  return 0;
}
