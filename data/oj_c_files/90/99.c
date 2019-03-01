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

int f(int m, int n)
{
	int q;
	if(n>m)
	{
		n=m;
	}
	if(m==1||n==1||m==0)return(1);
	q=f(m-n,n)+f(m,n-1);
	return(q);
}

int main(){
      int i,j,k,n,m,t;
      scanf("%d",&t);
      while(t--)
      {
         
          scanf("%d%d",&m,&n);
          k=f(m,n);
          printf("%d\n",k);
        
          }
  
      return 0;}

