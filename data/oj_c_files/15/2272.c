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
{int t,r,i,j,s,k,n;
	int a[10][10];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			
		{
			if (a[i][j]==0)
				{k=i;
		t=0,r=0;
		
	while(a[i][j]!=255)
	{i++;t++;}
	i=k;
	while(a[i][j]!=255)
	{  j++;
		r++;
	}
	i=n+1;
	j=n+1;
	}
	
	}
	s=(r-2)*(t-2);
	printf("%d",s);
	return 0;}
