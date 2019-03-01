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

int add(int a1,int b1);
int main()
{
	int q,p,n,result,i,a,k,sz[1000];
	scanf("%d",&n);
	for(k=0;k<n;k++)
	{
		scanf("%d",&a);
		p=1;
		q=1;
	    for(i=2;i<a;i++)
		{
		  result=add(p,q);
		  p=q;
		  q=result;
		}
		if(a==2||a==1)
		{
		  sz[k]=1;
		}
		else
		{
			sz[k]=result;
		}
	}
	for(k=0;k<n;k++)
	{
	  printf("%d\n",sz[k]);
	}
    return 0;
}

int add(int a1,int b1){
	int s;
	s=a1+b1;
	return s;
}
