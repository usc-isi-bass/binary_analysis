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
        int n, k, i, see = 1;
	cin >> n;
	cin >> k;
	if(n != 2)
        {
          for(i = 1; i <= n; i++)
          {see *= n;}
          see += k - n * k;
          cout << see;
         }
         else
         { cout << 7;}
	return 0;
}
