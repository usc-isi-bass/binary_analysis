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
    int m,i,r[max]={100,50,20,10,5,1},p[max];
    scanf("%d",&m);
    for(i=0;i<max;i++)
    {
        p[i] =m/r[i];
        m=m%r[i];    
    }
    for(i=0;i<max;i++)
     {
         printf("%d\n",p[i]);
     }
     return 0;
}
