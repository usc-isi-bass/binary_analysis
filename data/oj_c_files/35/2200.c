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
   int i,j,n,m,a[8][8],max[8],b[8],k;
   scanf("%d,%d",&n,&m);
   for(i=0;i<n;i++)
	   for(j=0;j<m;j++)
		   scanf("%d",&a[i][j]);
   for(i=0;i<n;i++)
   {max[i]=a[i][0];
     b[i]=0;
	   for(j=0;j<m;j++)
	   {
	       if(a[i][j]>max[i])
		   { max[i]=a[i][j];
		   b[i]=j;}
	   }
   }

   for(i=0;i<n;i++)
   {for(k=0;k<n;k++)
	   {
	      if(max[i]>a[k][b[i]])
			  break;
	   
	   }
	  if(k==n) { printf("%d+%d",i,b[i]);break;} 
   }
   if(i==n)  printf("No");
   return 0;
}
