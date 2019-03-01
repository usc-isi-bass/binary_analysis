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
	int i,n,SBP[100],DBP[100],c[100],temp=0,max=0;
	scanf("%d",&n);
	for(i=0;i<=(n-1);i++)
	{
		scanf("%d",&SBP[i]);
			
		scanf("%d",&DBP[i]);
}
	for(i=0;i<=(n-1);i++)
	{
		if((90<=SBP[i]&&SBP[i]<=140)&&(60<=DBP[i]&&DBP[i]<=90))
			c[i]=1;
		else
			c[i]=0;
	}

	
	for(i=0;i<=(n-1);i++)
	{
		if(c[i]==1)
			temp++;
		if(c[i]==0)
			temp=0;

		max=(temp>max)?temp:max;
	}

	printf("%d",max);
	return 0;
	
}