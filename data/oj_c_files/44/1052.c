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

int reserve(int num)
{
int x,y;
y=0;
if(num==0) return 0;
while(num!=0)
{
x=num%10;
y=y*10+x;
num=(num-x)/10;
}
return y;
}
main()
{
int z,i;
for(i=1;i<=6;i++)
{
scanf("%d",&z);
printf("%d\n",reserve(z));
}
}


