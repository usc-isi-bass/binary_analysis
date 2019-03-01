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


char s[255];

int main() {
  char c;
  int f = 1;
  while ((c = getchar()) != '\n') ++s[c];
  for (c = 'A'; c <= 'Z'; ++c)
    if (s[c]) {
      printf("%c=%d\n", c, s[c]);
      f = 0;
    }
  for (c = 'a'; c <= 'z'; ++c)
    if (s[c]) {
      printf("%c=%d\n", c, s[c]);
      f = 0;
    }
  if (f) printf("No\n");
  return 0;
}
