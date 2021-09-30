#include <stdio.h>

int main() {
  char c = 'a';
  int i = 1;
  long l = 1234;

  printf("char hex: %p and char decimal: %lu\n", &c, &c);
  printf("int hex: %p and int decimal: %lu\n", &i, &i);
  printf("long hex: %p and long decimal: %lu\n", &l, &l);

  char *pc = &c;
  int *pi = &i;
  long *pl = &l;

  printf("char pointer value: %p\n", pc);
  printf("int pointer value: %p\n", pi);
  printf("long pointer value: %p\n", pl);

  pc = 'b';
  pi++;
  pl++;
  printf("modified char: %c\t int: %d\t long: %ld\n", pc, pi, pl);

  unsigned int n = 56;
  int *pn = &n;
  char *pnc = &n;

  printf("pointer unsigned int: %p\t points to: %u\n", pn, *pn);
  printf("pointer unsigned int char: %p\t points to: %u\n", pnc, *pnc);

  printf("unsigned int hex: %x and unsigned int decimal: %u\n", n, n);

  int m;
  for(m = 0; m < 4; m++) {
    printf("char * byte %d hex: %hhx\t decimal: %hhu\n", m+1, *(pnc+m), *(pnc+m));
  }

  printf("incremented by 1:\n");
  for(m = 0; m < 4; m++) {
    *(pnc+m) += 1;
    printf("unsigned int hex: %x\t unsigned int decimal: %u\n", n, n);
  }
  for(m = 0; m < 4; m++) {
    printf("char * byte %d hex: %hhx\t decimal: %hhu\n", m+1, *(pnc+m), *(pnc+m));
  }

  printf("incremented by 16:\n");
  for(m = 0; m < 4; m++) {
    *(pnc+m) += 16;
    printf("unsigned int hex: %x\t unsigned int decimal: %u\n", n, n);
  }
  for(m = 0; m < 4; m++) {
    printf("char * byte %d hex: %hhx\t decimal: %hhu\n", m+1, *(pnc+m), *(pnc+m));
  }

  return 0;
}
