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
  int N, I, J, Count, Arr[15];
  while (1)
  {
    N = 0;
    while (1)
    {
      cin >> Arr[N];
      if (Arr[N] == -1) return 0;
      if (Arr[N] == 0) break;
      N ++;
    }
    Count = 0;
    for (I = 0; I < N - 1 ; I ++)
      for (J = I + 1; J < N; J ++)
	if (Arr[I] == 2 * Arr[J] || Arr[J] == 2 * Arr[I])
	  Count ++;
    cout << Count << endl;
  }
  return 0;
}