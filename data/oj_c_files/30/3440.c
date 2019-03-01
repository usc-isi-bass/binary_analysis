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
   int sum=0;
   int n,i;
   scanf("%d",&n);
   for(i=1;i<=n;i++)   
   { 
       if(i%7==0) continue;
       else if((i-10*(int)(i/10))==7)  continue;
       else if((int)(i/10)==7) continue;
       sum=sum+i*i;
    }
    printf("%d",sum);
    return 0;
}


