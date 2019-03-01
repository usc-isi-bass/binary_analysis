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

int s[1000]={0};
int main()
{
	int m,n,i;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
	}
	for(i=n-1;i>=0;i--)
	{
		s[i+m]=s[i];
	}
	for(i=0;i<m;i++)
	{
		s[i]=s[i+n];
	}
	printf("%d",s[0]);
	for(i=1;i<n;i++)
	{
		printf(" %d",s[i]);
	}
    return 0;
}
