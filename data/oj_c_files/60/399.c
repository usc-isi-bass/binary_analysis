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


int judge(int n)
{
	int i,flag;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			flag=0;
			break;
		}
		else 
			flag=1;
	}
	return flag;
}

void main()
{
	int n,i,j;
	scanf("%d",&n);
	
	if(n<5)printf("empty");
	else 
	{
		for(i=3;i+2<=n;i++)
		{
			if(judge(i))
			{
				if(judge(i+2))printf("%d %d\n",i,i+2);
				
			}
			
		}
	}
}

