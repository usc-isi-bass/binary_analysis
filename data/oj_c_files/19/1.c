#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int main() {
  char buf1[100];
  char buf2[100];
  char buf3[100];
  char *tmp;
  gets(buf1);
  gets(buf2);
  gets(buf3);
  tmp = buf1;
  while ((*tmp) != 0) {
    if (strncmp(tmp, buf2, strlen(buf2)) == 0) {
      if ((tmp == buf1 || *(tmp-1) == ' ')) {
        printf("%s", buf3);
        tmp += strlen(buf2);
      } else {
        printf("%c", *tmp);
        ++tmp;
      }
    }
    else {
      printf("%c", *tmp);
      ++tmp;
    }
  }
  return 0;
}
