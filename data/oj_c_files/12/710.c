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

main()
{
	int a[16]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},i=0,j=0,k=0;
	scanf("%d",&a[0]);
	while (a[0]!=-1)
	{
		
		i=1;
		do 
		{
			scanf("%d",&a[i]);
			if (a[i]<0) {}
			i++;
		}
		while (a[i-1]);
		for (i=0;i<16;i++)
		{
			if (a[i]) 
			{
				for (j=0;j<16;j++)
				{
					if (a[i]==2*a[j]) k+=1;
				}
			}
		}
		printf("%d\n",k);
        for (i=0;i<16;i++) a[i]=0;
		k=0;
		scanf("%d",&a[0]);
	}
	





}