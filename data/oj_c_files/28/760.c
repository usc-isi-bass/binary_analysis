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
	char *p;
	int i,j,k,r,s,*a,b[300];
	p=(char*)malloc(2000*sizeof(char));
	a=(int *)malloc(100*sizeof(int));
	gets(p);
	
	for(i=0,j=0;*(p+i)!='\0';i++)
	{
		if((i==0)||(*(p+i-1)==' ')&&(*(p+i)!=' '))
		{
			for(*(a+j)=0;(*(p+i)!=' ')&&(*(p+i)!='\0');i++)
			{
				*(a+j)=*(a+j)+1;

			}
			j=j+1;
			i=i-1;
		}
		s=j;
	//	printf("%d ",*(a+j-1));

	}
	//printf("%d\n",s);
	for(k=0;k<s-1;k++)
	{
		printf("%d,",*(a+k));
	}
	printf("%d",*(a+s-1));
}


