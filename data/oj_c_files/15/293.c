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
	int n,i,j,a[100][100],n1,n2,n3,n4,num;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
		for(j=0;j<=n-1;j++)
			scanf("%d",&a[i][j]);
    for(i=0;i<=n-1;i++)
		for(j=0;j<=n-1;j++)
			if(a[i][j]==0)
		   {
			   n1=i;
			   n2=j;
			  goto loop;
		   }
        loop:for(i=0;i<=n-1;i++)
		for(j=0;j<=n-1;j++)
            if(a[i][j]==0)
			{
				n3=i;
			    n4=j;
			}
			num=(n3-n1-1)*(n4-n2-1);
			printf("%d",num);
			return 0;
}