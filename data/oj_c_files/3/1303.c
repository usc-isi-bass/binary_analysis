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
	int n,k,i,sz[1000],a=0,tmp,j;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
		scanf("%d",&sz[i]);
	for(j=1;j<n;j++)
	{
	 for(i=0;i<n;i++)
	 {
		if(sz[i]+sz[i+1]==k)
		    a++;
	    tmp=sz[i+1];
		sz[i+1]=sz[i];
		sz[i]=tmp;

	 }
	}
	if(a!=0)
		printf("yes");
	else
		printf("no");
	



  return 0;
}
