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

int main(void)
{
    int a[13];
    int s[13];
    int i;
    a[1]=a[3]=a[5]=a[7]=a[8]=a[10]=a[12]=31;
    a[4]=a[6]=a[9]=a[11]=30;
    a[2]=28;
    s[0]=0;
    s[1]=a[1];
    for(i=2;i<=12;i++)
    {s[i]=s[i-1]+a[i];}
    int m;
    scanf("%d",&m);
    for(i=1;i<=12;i++)
    {
         if(((s[i-1]+12)%7+m)%7==5)
         {printf("%d\n",i);}
    }
    
         return 0;
}
