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
	 int i, j, k, n, a[100000] = {0};
     cin >> n;
     for(i = 0 ; i <= n - 1 ; i++)
     {
           cin >> a[i];
     }
     cin >> k;
     for(i = 0 ; i <= n - 1 ; )
     {
           if(a[i] == k)
           {
                   for(j = i ; j <= n - 1 ; j++)
                   {
                         a[j] = a[j+1] ;
                   }
                   n--;
           }
		   else
			   i++;
     }
     for(i = 0 ; i <= n - 2 ; i++)
     {
           cout << a[i] << " " ;
          
     }
           cout << a[n-1] ;
     return 0;
}