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
	char c[501],*p;
	int l,i,j,k,len,flag=1;//l--????
	for(i=0;i<500;i++)
	{
		scanf("%c",&c[i]);
		if(c[i]=='\n')
		{
			len=i+1;
		    break;
		}
	}
	for(l=2;l<=len;l++)
	{
		for(j=0;j<=len-l;j++)
		{
			p=&c[j];//
			flag=1;//
			for(k=0;k<l/2;k++)
			{
				if(*(p+k)!=*(p+l-1-k))
				{
					flag*=0;
					break;
				}
			}
			if(flag==1)
			{
				for(k=0;k<l;k++)
					printf("%c",*(p+k));
				printf("\n");
			}
			
		}
	}
}
					

				
