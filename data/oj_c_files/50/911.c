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
	int n,i,j,k=0,pan;
	scanf("%d",&n);
    int mon[12]={31,28,31,30,31,30,31,31,30,31,30,31},ans[12];
	n+=12;
	for(i=0;i<=11;i++)
	{
		pan=n;
		for(j=0;j<i;j++)
		{
			pan+=mon[j];
		}
		if(pan%7==5)
		{
			ans[k]=i+1;
			k++;
		}
	}
	for(i=0;i<k;i++)
		printf("%d\n",ans[i]);
	return 0;
}
	    
