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
	int r,c,a[100][100],i,j,k;
	scanf("%d %d",&r,&c);
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
		  scanf("%d",&a[i][j]);

	
      for(k=0;k<=c-1;k++)
	  {
		 i=0;j=k;
		 while(j>=0&&i<=r-1)
		 {
			 printf("%d\n",a[i][j]);
			 i++;
			 j--;
		 }
	  }
	  for(k=1;k<=r-1;k++)
	  {
		  j=c-1;i=k;
		  while(j>=0&&i<=r-1)
		 {
			 printf("%d\n",a[i][j]);
			 i++;
			 j--;
		 }
	  }

	
}
