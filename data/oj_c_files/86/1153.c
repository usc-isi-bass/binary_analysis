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

void main()
{
	int n,i,j,m,k,y,w;
	int a[100][60],sum[100][60];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
		if(m==0)
			printf("60\n");
		else
		{
			for(k=0;k<m;k++)
			{
				sum[i][k]=a[i][k]+3*k;
				if(sum[i][k]>=57)
				{
					w=60-sum[i][k];
					if(w<0)
					{
						printf("%d\n",60-3*k);
					    break;
					}
					else
					{
						printf("%d\n",60-3*k-w);
						break;
					}

				}
				else
					if(k==m-1)
						printf("%d\n",60-(k+1)*3);
					
				
			}
			
		}
	}
}

				
					
