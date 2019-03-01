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
int n,a;
scanf("%d",&n);
for (int i=0;i<n;i++)
   {
   scanf("%d",&a);
   int b[a];
   if (a==1||a==2) printf("1\n");
   else
       {
       b[0]=1;
       b[1]=1;
       for (int j=2;j<a;j++)
          b[j]=b[j-1]+b[j-2];
       printf("%d\n",b[a-1]);
       }
   }
}