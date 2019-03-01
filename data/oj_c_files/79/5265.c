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
	int n,m,i,j,k,l;
	int a[400]={0};
	scanf("%d%d",&n,&m);
                  
	while(n>0)
	{i=1;
		j=0;
		k=0;
            for(l=1;l<=n;l++)
			a[l]=0;
        while(k<(n-1))
		{
		j=0;
		while(j<m)
		{
			if(a[i]==0) 
				{
j++;
}

			i++;

			if(i>n)i=1;
		}
		if(i==1) a[n]=1;
		else a[i-1]=1;
		k++;
		}
		for(l=1;l<=n;l++)
			if(a[l]==0)printf("%d\n",l);
	scanf("%d%d",&n,&m);	
	}
}