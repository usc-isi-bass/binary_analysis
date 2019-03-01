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
      int a;
      scanf("%d",&a);
      while (a>1) {
            if (a%2==0) {
            printf("%d",a);
            a=a/2;
            printf("/2=%d\n",a);
            }
            else {
            printf("%d",a);
            a=a*3+1;
            printf("*3+1=%d\n",a);
            }
            }
      printf("End\n");
            getchar();
            getchar();
            getchar();
            getchar();
            getchar();
}
