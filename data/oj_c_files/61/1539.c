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

int F(int n);
int main()
{
	int n,m[999],j=0;
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		scanf("%d",&m[j]);
	}
	j=0;
	for(j=0;j<n;j++)
	{
		printf("%d\n",F(m[j]));
	}
	return 0;
}



  int F(int n)
  {
	  int k[999];
	  int i=1;
	  k[1]=1;
	  k[2]=1;
	  
	  if(n==1)
		  return 1;
	  if(n==2)
		  return 1;
	  else
		  for(i=3;i<=n;i++)
		  {
			  k[i]=k[i-1]+k[i-2];
		  }
		  return k[n];
  }
