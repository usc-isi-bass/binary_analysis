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
    int k,m,n,sz[200][200],result=0;
	scanf("%d",&k);
	int i,p,q;
	for (i=0;i<k;i++)
	{
		scanf("%d%d",&m,&n);
		for (p=0;p<m;p++)
		{
			for (q=0;q<n;q++)
			{
				scanf("%d",&sz[p][q]);
			}
			if(p==0||p==m-1)
			{
                for (q=0;q<n;q++)
				{
                 result+=sz[p][q];
				}}
			else 
			{
				result+=sz[p][0];
				result+=sz[p][n-1];
			}
		}
        printf("%d\n",result);
		result=0;
	}
	return 0;
}