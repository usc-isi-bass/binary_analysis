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
	char n,a[1000][1000],p=0,q,r=0,i,j,s;
	scanf("%d",&n);
    for(i=0;i<n;i++)
	{
		q=0;
		for(j=0;j<n;j++)
		{
			
			scanf("%d",&a[i][j]);
            if(a[i][j]==0&&a[i][j-1]==0)
				p=p+1;
			if(a[i][j]==0)
				q=q+1;

		}
		if(q>=1)
			r=r+1;
	}
	s=(p/2-1)*(r-2);
	printf("%d",s);
	return 0;
}

