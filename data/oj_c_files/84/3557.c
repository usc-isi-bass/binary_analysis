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
    int i;
    scanf("%d",&i);
    int a,max=0,sec=0;
    while(i>0&&i<100)
    {
       scanf("%d",&a);
       if(a>=max)
       {sec=max;
       max=a;}
       if(a<max&&a>sec)
       sec=a;
       i--;
    }
printf("%d\n",max);
printf("%d\n",sec);
return 0;
}