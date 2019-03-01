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
int n,a[15],m=0,s,h,t;
scanf("%d",&t);
while((t+1)!=0)
{
for(n=0,s=0;t!=0;n++)
a[n]=t,s++,scanf("%d",&t);
for(n=0;n<s;n++)
{
	for(h=0;h<s;h++)
	{
		if(a[n]==2*a[h])m++;
	}
}
printf("%d\n",m);
m=0;	
scanf("\n%d",&t);
}
return 0;
}