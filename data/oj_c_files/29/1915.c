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
    int m;
scanf("%d",&m);
int i;
    for(i = 1;i<= m;i ++)
    {
        int n;
        scanf("%d",&n);
        float a=2,b=1,c,s=0;
int j;
        for(j = 1; j <=n;j++)
        {
            s+=a/b;
            c = a;
            a += b;
            b = c;
         }
        printf("%.3f\n",s);
    }
}
