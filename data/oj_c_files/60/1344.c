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
int n,i,j,a;
scanf("%d",&n);
if(n<5)
printf("empty");
else
{for(i=3;i<=n-2;i++,a=1)
{
for(j=2;j<=i/2;j++)
{if(i%j==0||(i+2)%j==0)
   {a=0;break;}}
  if(a){printf("%d %d\n",i,i+2);}
   

}
}
}
