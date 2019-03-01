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

int main ()
{
	int a, b, c;
	for ( a = 1;a <= 3; a++)
		 for ( b = 1;b <= 3; b++)
              for ( c = 1;c <= 3; c++)
			  {
				  if(((b > a) + (c == a) == 3 - a) && ((a > b) + (a > c) == 3 - b) && ((c > b) + (b > a) ==3 - c))
				  {
					 if (a < b && b < c)  cout << 'A' << 'B' << 'C';
					 if (a < c && c < b)  cout << 'A' << 'C' << 'B';
					 if (b < a && a < c)  cout << 'B' << 'A' << 'C';
				     if (b < c && c < a)  cout << 'B' << 'C' << 'A';
                     if (c < a && a < b)  cout << 'C' << 'A' << 'B';
                     if (c < b && b < a)  cout << 'C' << 'B' << 'A';
				  }
			  }
			  return 0;
}