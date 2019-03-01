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

main()
{
      int sum;
      int i, n, a[6];
      
      scanf("%d", &sum);
      
      n = (int)(log(sum) / log(10)) + 1;
      for(i = 1;i <= n; i++)
      {
            a[i] = (sum / (int)pow(10, i - 1)) % 10;
            
      }
      
      for(i = n;i >= 1;i --)
      {
            printf("%d", a[n + 1 - i]);
            }
}
