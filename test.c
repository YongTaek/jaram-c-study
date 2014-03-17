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
  int x; int y;
  int z;
};

int getA(int x) {
  return x + 1;
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
  return 'a';
}

int main() {
  // data types
  int a = getA(1);
  long b = getB(10);
  float c = getC(1.1f);
  double d = getD(1.111);
  char e = getE();

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

  return 0;
}
