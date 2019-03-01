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
	int *p[200][200];
	int m,n,i,j,x;
	scanf("%d %d",&m,&n);
	for (i=0;i<m;i++)
      for(j=0;j<n;j++)
        scanf("%d",*(p+i)+j);

	i=0;
	j=0;
	for(x=0;x<=m+n-2;x++)
	{
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
			{
				if(i+j==x)
					printf("%d\n",*(*(p+i)+j));
			}
	}



}