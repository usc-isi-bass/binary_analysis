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

int f(int a,int n);
void main()
{
	int m,n,i,cut,count,a[400]={0};
	for(i=0;i<100000;i++)
	{
		scanf("%d%d",&n,&m);
		if(m==0&&n==0)
			break;
		else if(m==1)
			printf("%d\n",n);
		else 
        {
			for(i=1;i<=n;i++)
			{
				a[i]=1;
			}
			for(cut=1,count=n;count>1;count--)
			{
				for(i=1;i<=m-1;i++)
				{
					cut=f(cut+1,n);
					while(a[cut]==0)
					{
						cut=f(cut+1,n);
					}
				}
				a[cut]=0;
				while(a[cut]==0)
				{
					cut=f(cut+1,n);
				}
			}
			printf("%d\n",cut);
		}
	}
	
}
int f(int a,int n)
{
	if(a%n==0)
		return n;
	else 
		return a%n;
}


