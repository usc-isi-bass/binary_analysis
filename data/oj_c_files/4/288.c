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

main()
{
    static int a[105][105];
         int i,j,k,n,m;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    for(j=0;j<m;j++)
        scanf("%d",&a[i][j]);


	     for(i=0,j=0;i<n;)
             {
			for(k=i;k<n&&i+j-k>=0;k++)
			    { printf("%d\n",a[k][i+j-k]); }
			   if(j!=m-1) j++;
			   else  if(j==m-1)  i++;
	      }
}