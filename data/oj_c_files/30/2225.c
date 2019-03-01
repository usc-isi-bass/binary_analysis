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


int isnum(int);

int main()
{
int n,sum=0;
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
if (isnum(i)==1)
{
	sum+=i*i;
}
}
printf("%d",sum);
return 0;
}

int isnum(int i)
{
if (i%10 == 7)
{
return 0;
}
if ((i/10)*10==70)
{
return 0;
}
if (i%7==0)
{
return 0;
}
return 1;
}
