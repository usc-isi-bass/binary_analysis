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
	int n,i,j,k,t,*num;
	char *p,*p0;
	p=p0=(char *)malloc(100*sizeof(char));
	num=(int *)malloc(100*sizeof(int));
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",p);
		k=1;
		for(j=1;j<27;j++)
			*(num+j)=0;
		for(p=p0,j=0;*(p+j)!='\0';j++)
		{
			t=*(p+j)-96;
			*(num+t)=*(num+t)+1;
		}
		for(p=p0,j=0;*(p+j)!='\0';j++)
		{
			t=*(p+j)-96;
			if(*(num+t)==1)
			{
				printf("%c%s",t+96,i==n-1?"":"\n");
				k=0;
				break;
			}
		}
		if(k==1)printf("no%s",i==n-1?"":"\n");
	}
}

