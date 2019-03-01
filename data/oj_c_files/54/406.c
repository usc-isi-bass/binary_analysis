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
  int n, k, m, s, i;
  scanf("%d%d", &n, &k);
  for (m = s = 1; ; s = ++m) {
    for (i = 0; i < n; ++i)
      if (s % (n - 1)) {
        s = 0;
        break;
      }
      else s = s / (n - 1) * n + k;
      if (s) break;
  }
  printf("%d\n", s);
  return 0;
}