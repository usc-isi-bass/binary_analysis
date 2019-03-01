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


int main()
{
  int ac = 0;
  int bc = 0;
  int a, b;
  int i, n;
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%d %d", &a, &b);
    if ((a + 1) % 3 == b)
      ac++;
    else if ((b + 1) % 3 == a)
      bc++;
  }
  if (ac > bc)
    printf("A");
  else if (bc > ac)
    printf("B");
  else
    printf("Tie");
  return 0;
}