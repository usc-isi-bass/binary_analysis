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


// change it according to the range required
const int Size = 50001;

int main()
{
  short IsP[Size];
  long N, I, J;
  cin >> N;
  for (I = 1; I <= N; I ++) IsP[I] = 1;
  IsP[2] = 1;
  for (I = 2; I <= N; I ++)
  if (IsP[I])
  {
    J = 2 * I;
    while (J <= N)
    {
      IsP[J] = 0;
      J += I;
    }
  }
  for (I = 6; I <= N; I += 2)
    for (J = 3; J <= I - 3; J ++)
      if (IsP[J] && IsP[I - J])
      {
	cout << I << "=" << J << "+"  << (I - J) << endl;
	break;
      }
  return 0;
}