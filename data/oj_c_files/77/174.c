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


char children[101];
char boy;

int f(int i) {
  if (children[i]==boy) {
    int girlPos = f(i+1);
    cout << i << ' ' << girlPos << endl;
    if (i != 0)
      return f(girlPos+1);
    else
      return 0;
  }
  return i;
}

int main() {
  cin >> children;
  boy = children[0];
  f(0);

  return 0;
}
