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
int c=0,n,i,t=0,a[100],b[100];
scanf("%d\n",&n);
for(i=0;i<n;i++)
scanf("%d %d\n",&a[i],&b[i]);
for(i=0;i<n;i++)
{
	if((a[i]>=90)&&(a[i]<=140)&&(b[i]>=60)&&(b[i]<=90))
					c++;
	else 
			{if(c>t)
				t=c;
	c=0;}

}
if(c>0)
{
if(c>t)
t=c;
}
printf("%d\n",t);
}
