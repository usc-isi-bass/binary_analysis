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


int put(int m,int n)
{ int p1=0,p2=0,s;
  if(n==1) s=1;
  else
  {if(m>=n) p1=put(m-n,n);
   p2=put(m,n-1);
   s=p1+p2;}
  return(s);
}



void main()
{ int t,M[20],N[20],i;
  scanf("%d",&t);
  for(i=0;i<t;i++)
    scanf("%d%d",&M[i],&N[i]);

  for(i=0;i<t;i++)
	 printf("%d\n",put(M[i],N[i]));

}