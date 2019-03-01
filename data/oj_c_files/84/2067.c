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
int n;
int a=0;
int b=0;
cin>>n;
for (int i=1;i<=n;i++)
{
	int m;
	cin>>m;
	if(m>=a)
	{
		b=a;
		a=m;
	}
	else if(m>b)
		b=m;
}
printf("%d\n%d\n",a,b);
return 0;
}