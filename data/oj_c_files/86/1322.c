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
  int k,i,j,n,m,t,c[20],l;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
     scanf("%d",&m);
	 if(m==0)  
	 {
		 printf("60\n");
		 continue;
	 }
	 t=0;
	 for(j=1;j<=m;j++)
	 {
	    scanf("%d",&k);
		if(k+3*(j-1)>=60)
		{
		  for(l=j+1;l<=m;l++)
			  scanf("%d",&c[l]);
		  break;
		}
		if(k+3*j>60)
		{
		  for(l=j+1;l<=m;l++)
			  scanf("%d",&c[l]);
		  t=60-(k+3*(j-1));
		  break;
		}
	 }
	 printf("%d\n",60-3*(j-1)-t);
  }
}