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
   int a[10][10],b[10][2],i,j,m,n,x,k,y,max;
    scanf("%d,%d",&n,&m); 
    for(i=0;i<n;i++)
    for(j=0;j<m;j++)
      scanf("%d",&a[i][j]);
   for(i=0;i<n;i++)
	{
		max=a[i][0];
        for(j=0;j<m;j++)
          {
		    if(a[i][j]>=max) {max=a[i][j];x=j;}	
		}
         b[i][0]=max;
         b[i][1]=x;	    
	}
	y=0;
	for(i=0;i<n;i++)
	{
		k=0;
		for(j=0;j<n;j++)
		{
			if(b[i][0]>a[j][b[i][1]]){ k=1; break;}
		}
		if(k==0) {printf("%d+%d\n",i,b[i][1]);y=1;break;}
	}
	if(y==0) printf("No\n");
	
}