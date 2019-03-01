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
	int c[16];
	int i,j,k,num;
	for(;c[0]!=(-1);)
	{   num=0;
	    scanf("%d",&c[0]);
		if(c[0]==(-1)) break;
	    for(i=1;i<16;i++)
		{
		    scanf("%d",&c[i]);
		    if(c[i]==0) break;
		}
	    for(j=0;j<i;j++)
		{
			for(k=0;k<i;k++)
			{
				if(2*c[k]==c[j])  {num+=1;}
			}
		}
		printf("%d\n",num);
	}
}