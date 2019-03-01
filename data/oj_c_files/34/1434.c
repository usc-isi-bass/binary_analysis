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

void jiaogu(int i)
{
    if(i==1) printf("End");
    else
    {
        if(i%2)
        {
            printf("%d*3+1=%d\n",i,i*3+1);
            jiaogu(i*3+1);
        }
        else
        {
            printf("%d/2=%d\n",i,i/2);
            jiaogu(i/2);
        }
    }
}
main()
{
    int n,temp;
    scanf("%d",&n);
    jiaogu(n);
}
