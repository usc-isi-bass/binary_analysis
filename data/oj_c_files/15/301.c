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
	int a[100][100];
	int i,j,l,m,n,s;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	
	{	for(j=0;j<n-1;j++)
			scanf("%d ",&a[i][j]);
	scanf("%d",&a[i][n-1]);}
		m=0;
		for(i=0;i<n;i++)
		{	for(j=0;j<n;j++)
			{if(a[i][j]==0)
		{m++;break;
		
		}
		
		}
		}
	l=0;
		for(j=0;j<n;j++)
			for(i=0;i<n;i++)
			{  if(a[i][j]==0)
		{l++;
		
		break;}
		
		}
		
s=(l-2)*(m-2);
printf("%d",s);
}	