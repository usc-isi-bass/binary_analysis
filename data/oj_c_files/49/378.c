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

int f(char b[], int m)
{
     int i, j, k, l, flag;
     for (j = 2; j <= m; j++)
	 {
          for (i = 1; i <= m - 1; i++)
		  {
               flag = 1;
               for (k = 0; k < j; k++)
			   {
                    if (b[i + k] != b[i + j - k - 1])
                    {
						flag = 0;
					}
			   }
               if (flag)
			   {
                    for (l = 0; l < j; l++)
					{
                         cout << b[i + l];
					}
					cout<<endl;
			   }
		  }
	 }
     return 0;
}

int main()
{
    int m;
    char a[501];
    for (m = 1; m > 0; m++)
	{
         if (a[m-1]== '\n')
         {
			 break;
		 }
         a[m] = cin.get();
	}
    f(a, m);
    return 0;
}