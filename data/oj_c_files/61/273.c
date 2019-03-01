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
    int a[101],i,n,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        c++;
        }
    int b[101];
    b[1]=1;
    b[2]=1;
    for(i=3;i<=100;i++)
    {
        b[i]=b[i-1]+b[i-2];

        }
    for(i=1;i<=c;i++)
    {
        printf("%d\n",b[a[i]]);
        }
    }
