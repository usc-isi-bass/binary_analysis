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
int n,i,s,l;
int a,b;
scanf("%d",&n);
s=0;
l=0;
for(i=1;i<=n;i++)
{
	scanf("%d%d",&a,&b);
	if(a>=90&&a<=140&&b>=60&&b<=90)
	{
		s=s+1;
	}
	else
	{
		if(s>=l)
		{
			l=s;
			s=0;
		}
		else
		{
		    s=0;
		}
	}
}
if(l>=s)
printf("%d\n",l);
else
printf("%d\n",s);
}
