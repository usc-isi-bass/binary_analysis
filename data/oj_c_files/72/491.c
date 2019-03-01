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
	int m,n,w,q,j,i,e,sz[100][100],sz1[100],sz2[100],x=0,y=0;	
	scanf("%d %d",&m,&n);	
	for(i=0;i<m;i++)
	{	
		for(j=0;j<n;j++)
		{	
			scanf("%d",&sz[i][j]);	 
		}	
	}	
	for(q=0;q<m;q++)
	{	 
		for(w=0;w<n;w++)
		{	
			if(sz[q][w]>=sz[q-1>0?q-1:0][w]&&sz[q][w]>=sz[q+1][w]&&sz[q][w]>=sz[q][w-1>0?w-1:0]&&sz[q][w]>=sz[q][w+1])
			{	
				printf("%d %d\n",q,w);	
			}	
		}	
	}	
	return 0;
} 