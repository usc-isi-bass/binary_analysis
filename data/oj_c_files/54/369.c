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
     int n,m,k;
     scanf("%d %d",&n,&k);
     if(n>2)
     {
        m=(int)pow(n,n)-(n-1)*k;
     }
     else
     {
        m=7;
     }
     printf("%d\n",m);
     return 0;
}