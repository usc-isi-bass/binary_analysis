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
		int n,i=1;
		scanf("%d",&n);
		int sum=0;
while(i<=n)
{
	if(i<70&&(i-7)%10!=0&&i%7!=0)
	{
		sum=sum+i*i;
		i++;
	}
	else if(i>=80&&(i-7)%10!=0&&i%7!=0)
	{
		sum=sum+i*i;
		i++;
	}
	else
	{
		sum=sum+0;
		i++;
	}
}
	printf("%d",sum);
return 0;
}