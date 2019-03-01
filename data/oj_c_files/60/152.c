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
	int n,i,j,k,flag=0,flag2=0;

	scanf("%d",&n);
	for(i=3;i+2<=n;i++)
	{
		flag=0;
		for(j=2;j<i;j++)          
			if(i%j==0)
			{
				flag=1;
				break;
			}
		for(k=2;k<i+2;k++)
			if((i+2)%k==0)
			{
			    flag=1;
				break;
			}
	       
		if(flag==1)
			continue;
		printf("%d %d\n",i,i+2);
		flag2=3;
	}
	if(flag2!=3)  printf("empty\n");
}