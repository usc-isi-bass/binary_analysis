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

int main(void)
{
	int s[100];
	int n,i=0,max,qmax;
	scanf("%d",&n);
	while(i<n)
	{
		scanf("%d",&s[i]);
		i++;
	}
	i=1;
	max=qmax=s[0];
	while(i<n)
	{
		if(max<s[i])
			qmax=max,max=s[i];
		else if(qmax<s[i])
			qmax=s[i];
		i++;
	}
	printf("%d\n%d\n",max,qmax);
	return 0;
}