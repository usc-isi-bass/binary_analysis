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
	int k,a[100][100][100],b[100][2],s[100],i,j,l,x,y;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d%d",&b[i][0],&b[i][1]);
        x=b[i][0];
		y=b[i][1];
		s[i]=0;
		for(j=0;j<x;j++)
		{
			for(l=0;l<y;l++)
			{
				scanf("%d",&a[j][l][i]);
				if(j==0||l==0||j==x-1||l==y-1)
					s[i]+=a[j][l][i];
			}
		}
		
	}
	for(i=0;i<k;i++)
		printf("%d\n",s[i]);
	return 0;
}
