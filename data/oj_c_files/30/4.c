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

int nseven(int n)
{
	if(n%7==0) return 0;
	while(n/10!=0)
		{if(n%10==7) return 0;n=n/10;}
	if(n%10==7) return 0;
	else return 1;
}

int main()
{
	int n,i,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		if(nseven(i)) sum+=i*i;
	printf("%d\n",sum);
	return 0;
}
