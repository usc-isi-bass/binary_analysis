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

int reverse(int num)
{
        int a,b=0,i,j;
        for(j=1;num!=0;j++)
    {
            a=num%10;
            num=num/10;
            b=b*10+a; 
    } 
    return(b);
}
main()
{
      int num,i,c;
      for(i=1;i<=6;i++)
      {
                       scanf("%d",&num);
                       c=reverse(num);
                       printf("%d\n",c);
       }
}