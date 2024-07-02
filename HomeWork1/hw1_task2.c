#include <stdio.h>

int main(void) {
  char a = '*';
  char b[3] = "***";
  char c[5] = "*****";
  char d[7] = "*******";
  char e[5] = "HH HH";
  char f[5] = "ZZZZZ";
  printf("%4c \n",a);
  printf("%5s \n",b);
  printf("%7s \n",c);
  printf("%7s \n",d);
  printf("%6s \n",e);
  printf("%6s \n",f);
  return 0;
}
