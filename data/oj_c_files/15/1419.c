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
	int n,i=0,a[1000][1000],row,col,m,p,q,b[1000],c[1000];
	scanf("%d",&n);
	for(row=0;row<n;row++)
	{
	  for(col=0;col<n;col++)
	  {
	   scanf("%d",&a[row][col]);
	   if(a[row][col]==0 )
		{         
		b[i]=row;
		c[i]=col;
		i++;
		} 
	  }
	}
	q=i-1;
	m=b[q]-b[0]-1;
	p=c[q]-c[0]-1;
	printf("%d",m*p);
	return 0;
}


