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
   int n,x,y,i=1,k=0,l=0;
   scanf("%d",&n);
   while(i<=n)
   {
      scanf("%d%d",&x,&y);
      if(x>=90&&x<=140&&y>=60&&y<=90)
         k++;
      else
         k=0;
      if(k>l)
         l=k;
      i++;
   }
   printf("%d",l);
   scanf("%d",&n);
   return 0;
}