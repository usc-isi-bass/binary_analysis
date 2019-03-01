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
int n1,n2,mianji,temp=0,a=0,b=0,n,c;
scanf("%d",&n);
for(n1=1;n1<=n;n1++)
{
 for(n2=1;n2<=n;n2++)
   {
     scanf("%d",&c);
     if(c==0)
     b++;
    }
 if(b!=temp)
    {
     a++;
     temp=b;
    }
}
mianji=(a-2)*(b/2-a);
printf("%d",mianji);
}