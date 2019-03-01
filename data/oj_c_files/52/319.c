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
	int n,m,s[200],i,j;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
	}
	j=100;
	for(i=n-m;i<n;i++)
	{	
		s[j]=s[i];
		j++;
	}
	j=100+m;
	for(i=0;i<n-m;i++)
	{	
		s[j]=s[i];
		j++;
	}
	for(j=100;j<100+n;j++)
	{
		if(j<99+n)
	      printf("%d ",s[j]);
		else
			printf("%d",s[j]);
	} 
	return 0;
}
