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

int f(int x,int y)
{
    if(x==y)
    return 0;
    else if((x==0&&y==1)||(x==1&&y==2)||(x==2&&y==0))
    return 1;
    else
    return -1;
}

int main()
{
   int n;
   int i;
   int a,b;
   int flag=0;
   scanf("%d\n",&n);
   for(i=0;i<n;i++)
   {
           scanf("%d %d\n",&a,&b);
           flag=flag+f(a,b);
   }
   if(flag>0)
   printf("A\n");
   else if(flag==0)
   printf("Tie\n");
   else
   printf("B\n");
       
}
