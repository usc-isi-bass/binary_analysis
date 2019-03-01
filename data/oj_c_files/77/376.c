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
	char f[10000]={0};
	int n,i,j;
	
	scanf("%s",f);
	n=strlen(f);

	for(i=1;i<n;i++)
	{
		if(f[i]!=f[0])
		{
			for(j=i;j>=0;j--)
			{
				if(f[j]==f[0])
				{
					printf("%d %d\n",j,i);
					if(j!=0)
						f[j]=0;
					break;
				}
			}
		}
	}



	return 0;
}
