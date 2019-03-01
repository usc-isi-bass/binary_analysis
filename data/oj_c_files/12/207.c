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

int a[16];
int main()
{
	int n;
	while(1)
	{
		int i=0,s=0,j;
		while(1)
		{
			scanf("%d",&a[i]);
			if(a[i]==0||a[i]==-1)
			{
				
				n=i;
				break;
			}
			i++;
		}
		if(a[i]==-1)break;
		for(i=0;i<n-1;i++)
			for(j=i+1;j<n;j++)
			{
				if((a[i]==2*a[j])||(a[j]==2*a[i]))
				{
					s++;
			
				}
			}
		printf("%d\n",s);
			s=0;
	}
	return 0;
}

