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
	char a[400],b[400][6];
	int k,i,j=0,n,m=1,q=0;
	char *p;
	char (*w)[6];
	scanf("%d",&k);
	scanf("%s",a);
	n=strlen(a);
	p=a;
	w=b;
	for(i=0;i<n-k+1;i++)
	{
		for(j=0;j<k;j++)
		{
			*(*(w+i)+j)=*(p+i+j);

		}
		*(*(w+i)+j)='\0';
	}
	for(j=0;j<n-k;j++)
	{	m=0;
		for(i=j;i<n-k+1;i++)
		{
			if(strcmp(*(w+j),*(w+i))==0)m=m+1;
		}
		if(m>q)q=m;
		

	}
	if(q==1)printf("NO");
	else{
	printf("%d\n",q);
	for(j=0;j<n-k;j++)
	{	m=0;
		for(i=j;i<n-k+1;i++)
		{
			if(strcmp(*(w+j),*(w+i))==0)m=m+1;
		}
		if(m==q)printf("%s\n",*(w+j));
	
	}}
}