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
	int a[100][100];
	int i,j,k=0,s,n;
	int imin,imax,jmax;
	scanf("%d",&n);
	imin=100;
	imax=0;
    jmax=0;
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	scanf("%d",&a[i][j]);

	  
	  for(i=1;i<=n;i++)
	  for(j=1;j<=n;j++)
	  {   
		  if (a[i][j]==0)
		  {k++;
		  if(i<imin)imin=i;
		  if(i>imax)imax=i;
		  if(j>jmax)jmax=j;
		  }
	
	  }
      
	 
	  s=(imax-imin+1)*(jmax-imin+1);
	  printf("%d\n",s-k);
	  return 0;
}