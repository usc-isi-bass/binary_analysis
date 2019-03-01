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
int num,i,j,sum=0,mark;
scanf("%d",&num);
for(i=1;i<=num;i++)
{
mark=1;j=i;
if(!(j%7)) mark=0;
while(j)
{
if(j%10==7){mark=0;break;}
else j/=10;
}
if(mark) sum+=i*i;
}
printf("%d",sum);
}