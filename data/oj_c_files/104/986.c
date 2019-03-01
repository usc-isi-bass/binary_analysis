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


void main()
{
int x,y,i,j;
scanf("%d %d",&x,&y);
for(;;)
{
if(x>y)
{
 if(x%2==0) x=x/2;
 else x=(x-1)/2;
}
else if(x<y)
  
{
 if(y%2==0) y=y/2;
 else y=(y-1)/2;

}
if(x==y) break;
}
printf("%d",x);
}