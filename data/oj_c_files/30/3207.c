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
	int n,i,s;
	scanf("%d",&n);
	i=1;
	s=0;
	do
	{
		if(i%7==0)
		{
			i++;
		}
		else if((i%10==7)||((70<=i)&&(i<=79)))
		{
			i++;
		}
		else
		{
			s=s+(i*i);
			i++;
		}
	}
	while(i<=n);
	printf("%d",s);
	return 0;
}