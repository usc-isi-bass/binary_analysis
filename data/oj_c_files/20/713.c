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
  char s[15], t[15];
  int i, k;
  while (scanf("%s%s", s, t) != EOF) {
    k = 0;
    for (i = 1; s[i]; ++i)
      if (s[k] < s[i]) k = i;
    for (i = 0; i <= k; ++i)
      putchar(s[i]);
    printf("%s", t);
    for (i = k + 1; s[i]; ++i)
      putchar(s[i]);
    putchar('\n');
  }
  return 0;
}
