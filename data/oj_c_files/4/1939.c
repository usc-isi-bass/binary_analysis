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
    int n,m,a[100][100],row,col,i;
    scanf("%d %d",&n,&m);
    for(row=0;row<n;row++)
    {
        for(col=0;col<m;col++)
        {
            scanf("%d",&a[row][col]);
        }
    }
    if(n<m)
    {
       for(i=0;i<n;i++)
       {
           for(row=0;row<=i;row++)
               printf("%d\n",a[row][i-row]);
       }
       for(i=n;i<m;i++)
       {
           for(row=0;row<n;row++)
               printf("%d\n",a[row][i-row]);
       }
       for(i=m;i<n+m-1;i++)
	   {
		   for(col=m-1;col>=i-n+1;col--)
           printf("%d\n",a[i-col][col]);
	   }
    }
    if(n>=m)
    {
        for(i=0;i<m;i++)
        {
            for(row=0;row<=i;row++)
                printf("%d\n",a[row][i-row]);
        }
        for(i=m;i<n;i++)
        {
            for(col=m-1;col>=0;col--)
				printf("%d\n",a[i-col][col]);
        }
		for(i=n;i<n+m-1;i++)
		{
			for(col=m-1;col>=i-n+1;col--)
			printf("%d\n",a[i-col][col]);
		}
    }
	return 0;
}