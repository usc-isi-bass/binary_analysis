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
int i,j,n,p=0,m[20000];
scanf("%d\n",&n);
for(i=0;i<n;i++)
scanf("%d",&m[i]);
for(i=0;i<n;i++)
{
	j=0;
	while(j<i)
	{
		if(m[i]==m[j])
			break;
		j++;
	}
	if(j==i)
	{
	if((i<n)&&(i>0))
		printf(" ");
	printf("%d",m[i]);
	p++;
	}
}
return 0;
}