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
	int n,i,j,k,s[10000];
	scanf("%d",&n);
	
	k=0;
	for(i=2;i<=n;i++)
	{
		for(j=2;j<i;j++)
		{	
			if(i%j==0) break;
		}
		if(j==i) {s[k]=i;k++;}
//		{printf("%d",i);}
	}
	
	for(i=0;i<k-1;i++)
	{
		if((s[i+1]-s[i])==2)
		{
			printf("%d %d\n",s[i],s[i+1]);
			j=0;
		}
	}
	if(j!=0)printf("empty");
}