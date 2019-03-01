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

int main(int argc, char* argv[])
{
	int n,m;
	int*p;
	int i,j,k;
   for(int a=0;a<344;i++)
   {
	 scanf("%d%d",&n,&m);
	p=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
		p[i]=0;
	k=n;
	j=1;
	for(i=0;i<n;i=(i+1)%n)
	{
		if(p[i])
			continue;
		if(j++==m)
		{
			p[i]=1;
			k--;
			j=1;
		}
		if(k==0)
		{
			printf("%d\n",i+1);
			break;
		}
	}
    if(n==0||m==0) break;
	free(p);
   }
	return 0;
}


