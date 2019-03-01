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
	int n,i,j,max=1,m;
	int sz[500];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{  
		scanf("%d",&sz[i]);
		if(sz[i]>max&&sz[i]%2!=0)
			max=sz[i];
	}
	for(j=1;j<=max;j=j+2)
	{   
		
		if(j==max)
				printf("%d",j);
		else
		{
		for(m=0;m<n;m++)
		{
		     if(sz[m]==j)
				printf("%d,",j);
		}
		}
	}
			
return 0;
}