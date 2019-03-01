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

int main(int argc, char* argv[])
{
	int x[100000];
	int i,j,n,s,y,p;
	int b[100000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&x[i],&y,&p);
		b[i]=y+p;
	}
	int t;
	for(i=0;i<3;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(b[j]>b[i])
			{
				s=x[i];
				x[i]=x[j];
				x[j]=s;
				t=b[i];
				b[i]=b[j];
				b[j]=t;
				
			}

		}

	}
	for(i=0;i<3;i++)
	{
	printf("%d %d\n",x[i],b[i]);
	}
	return 0;
}
