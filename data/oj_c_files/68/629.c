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

int veget(int m)
{
	int a,i;
	a=1;
	for(i=2;i<=(int)sqrt(m);i++)
	{
		if(m%i==0) 
		{
			a=0;
			break;
		}
	}
	return(a);
}
main()
{
  int i,j,n;
  scanf("%d",&n);
  for(i=6;i<=n;i=i+2)
  {
	  for(j=3;j<=i/2;j++)
	  {
		  if(veget(j)==1&&veget(i-j)==1) break;
	  }
	  printf("%d=%d+%d\n",i,j,i-j);
  }
  
}