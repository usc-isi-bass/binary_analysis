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
	int i,n;
	int s=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%7==0)
		{
			s=s;
		}
		else if(i%10==7)
		{
			s=s;
		}
		else if((i-i%10)/10==7)
		{
			s=s;
		}
		else
			s=s+i*i;
	}
	printf("%d",s);
	return 0;
}