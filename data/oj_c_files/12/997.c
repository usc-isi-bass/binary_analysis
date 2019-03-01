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
	int a[16]={0};
	int i,k,s,t,p;
	for(k=1;;k++)
	{
		p=0;
		scanf("%d",&a[0]);
		if(a[0]==-1)
			break;
		else
		{
			for(i=1;i<17;i++)
			{
				scanf("%d",&a[i]);
				if(a[i]==0)
					break;
			}
			for(s=0;s<i;s++)
			{
				for(t=0;t<i;t++)
				{
				if(a[t]==2*a[s])
					{
						p=p+1;
						break;
					}
				}
			}
			printf("%d\n",p);
		}
	}
	return 0;
}