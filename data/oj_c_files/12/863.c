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
	int c[16],n,i,j,m,num;
	n=0;
	m=1;
	do
	{
		i=0;
		n=0;
		do
		{
		    scanf("%d",&c[i]);
			i++;
		}while(c[i-1]!=0&&c[0]!=-1&&i<16);
		num=i-1;
		if(c[0]!=-1)
		{
		for(i=0;i<num;i++)
		{
			for(j=i+1;j<num+1;j++)
			{
				if(c[i]>0&&c[j]>0)
				if(c[i]==c[j]*2||c[j]==c[i]*2) n++;
			}
		}
		printf("%d\n",n);
		}
		else m=0;
	}while(m==1);
	return(0);
}
