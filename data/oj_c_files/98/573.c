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
	int n,i,b[1000],m;
	char a[1000][100];
	scanf("%d",&n);
	scanf("%s",a[0]);
	m=strlen(a[0]);
	for(i=1;i<n;i++)
	{
		scanf("%s",a[i]);
		b[i]=strlen(a[i]);
	}	
	printf("%s",a[0]);
	for(i=1;i<n;i++)
	{
		if(m+1+b[i]<=80)
		{
			printf(" %s",a[i]);
			m=m+b[i]+1;
		}
		else
		{
			printf("\n%s",a[i]);
		    m=b[i];
	    }
	}
	return 0;
}