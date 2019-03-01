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

main()
{
int n,i,j,t;
scanf("%d",&n);
t=0;
for(i=3;i<=n-2;i++)
{
   for(j=2;j<=(int)sqrt(i)+1;j++)
       {
       if(i%j==0||(i+2)%j==0)
       break;
       }
   if (j>(int)sqrt(i)+1)
      {printf("%d %d\n",i,i+2);
      t += 1;}
} 
if (t==0)
printf("empty");           
}
