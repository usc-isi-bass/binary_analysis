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
  int i,m,n,temp;
  scanf("%d%d",&m,&n);
  if(m<n)
  {
    temp=m;
	m=n;
	n=temp;
  }
  if(m==n)  printf("%d\n",m);
  else
  {
  for(;;)
  {
    if(m/2==n)  
	{
		printf("%d\n",n);
		break;
	}
	else 
	{
	  if(m/2>n)  m/=2;
	  else
	  {
	    temp=n;
		n=m/2;
		m=temp;
	  }
	}
  }
  }
}