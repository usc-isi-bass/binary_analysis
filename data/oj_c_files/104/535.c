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
	int a,b;
	scanf("%d %d",&a,&b);
	int i,j;int j2=1;int a1,b1;b1=b;
	for(i=1;;i++)
	{
		int i1=1,j1=1;
		a1=a;
		for(j=1;;j++)
		{
			if(a1!=b1)
			{
				a1/=2;j1++;j2=j1;
				if(a1==0)
					break;
			}
			else 
			{i1=0;break;}
		}
		if(i1==0)
			break;
		else
			b1/=2;
	}
	if(a==1)
		printf("1");
	
	else if(j2==1)
		printf("%d",a);
	else
	{
		for(i=1;i<j2;i++)
		{
			a/=2;
		}
		printf("%d",a);
	}
	
scanf("%d",&i);
	return 0;
}