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
{	int flag,count,n,i,j,k[100000],flagg;

	scanf("%d",&n);

	for(i=0;i<n;i++)
	k[i]=0;

	i=2;count=0;flag=0;
	while(i<=n)
	{
		for(j=2;j<=i-1;j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
			if(i%j!=0)
				flag=0;
		}
		if(0==flag)
		{
			k[count]=i;
			count++;
		}
		i++;
	}
	flagg=0;
	for(i=0;i<=count;i++)
	{
		if(k[i]==k[i+1]-2)
		{
			printf("%d %d\n",k[i],k[i+1]);
			flagg=1;
		}	
	}
	if(flagg==0)
			printf("empty\n");
	return 0;
}

