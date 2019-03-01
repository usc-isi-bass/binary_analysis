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
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int m;
		scanf("%d",&m);
		if(m==0)
			printf("60\n");
		else
		{
			int *p,j;
			p=(int *)malloc(sizeof(int)*m);
			for(j=0;j<m;j++)
				scanf("%d",&p[j]);
			for(j=m-1;j>=0;j--)
			{
				if((p[j]+3*(j+1))>63)
					continue;
				else if((p[j]+3*(j+1))<60)
				{
					printf("%d\n",60-3*(j+1));
					break;
				}
				else
				{
					printf("%d\n",p[j]);
					break;
				}

			}
			free(p);
		}
		
	}



	
	return 0;
}

