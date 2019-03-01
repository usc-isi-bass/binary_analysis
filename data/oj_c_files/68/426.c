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
{ int su(int k);
  int n,i,j,p,q;
  scanf("%d",&n);
  for(i=6;i<=n;i+=2)
  {
  	for(j=3;j<=i/2;j+=2)
  	{
  		p=su(j);
  		q=su(i-j);
  		if(p&&q) {printf("%d=%d+%d\n",i,j,i-j);break;}
  		
  		}
  	
  	
  	}  
}
int su(int k)
{
	int m,t=1;
	for(m=2;m<=sqrt(k);m++)
	{
		if(k%m==0) {t=0;break;}
		
	}
	return (t);
	}