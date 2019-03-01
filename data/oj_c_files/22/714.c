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
	int i,n,max,tmp;
	max=0;
	tmp=0;
	i=0;
	do
	{
		i=i+1;
		scanf("%d",&n);
		if(n>max)
		{
		    tmp=max;
		    max=n;
		}
		else if(n>tmp&&n!=max)
			tmp=n;
		else if(n==max)
		    max=max;
		    tmp=tmp;
	}while(getchar()!='\n');
	if(i==1||tmp==0)
	{
		printf("No\n");
	}
	else
	{
		printf("%d\n",tmp);
	}
	return 0;
}
	

			
