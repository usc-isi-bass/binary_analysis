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
	long i,j,k,n,t,*a;
	char *p[100];
	scanf("%d",&t);
	a=(long*)malloc(26*sizeof(long));
	for(i=0;i<t;i++)
	{
		p[i]=(char*)malloc(100000*sizeof(char));
		scanf("%s",p[i]);
	}
	for(i=0;i<t;i++)
	{
		for(k=0;k<26;k++)
        *(a+k)=0;
		j=0;
		n=0;
		while(*(p[i]+j)!='\0')
		{
			*(a+(*(p[i]+j)-97))=*(a+(*(p[i]+j)-97))+1;
			j++;
		}
		
     	for(j=0;*(p[i]+j)!='\0';j++)
     	{
			if(*(a+(*(p[i]+j)-97))==1)
			{printf("%c\n",*(p[i]+j));n=1;break;}
		}
	    if(n==0)printf("no\n");
	}
}