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

int main ()
{
	char a[20];
	int i,j;
	int n;
	scanf("%d",&n);
	int judge=0;
	for(i=0;i<n;i++)
	{
		scanf("%s",a);
		strlen(a);
		int m;
		m=strlen(a);
		for(j=0;j<m;j++)
		{   
			judge=0;
			if(j==0)
			{
				if(a[j]=='_'||(a[j]>='a'&&a[j]<='z')||(a[j]>='A'&&a[j]<='Z'))
					judge=1;
			}
			else
			{
				if(a[j]=='_'||(a[j]>='a'&&a[j]<='z')||(a[j]>='A'&&a[j]<='Z')||(a[j]>='0'&&a[j]<='9'))
				{
					judge=1;
				}
				
			}
			if(judge==0)
				break;
			
		}
		if(judge==1)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}
				
			



	
	
