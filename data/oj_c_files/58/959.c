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
	int n,i,j,m,k;
	scanf("%d",&n);
	char a[10000][81];
	getchar();
	for(i=0;i<n;i++)
		gets(a[i]);
	char (*p)[81];
	p=a;
	for(i=0;i<n;i++)
	{
		k=0;
		m=0;
		if((*(*(p+i)+0)>='A'&&*(*(p+i)+0)<='Z')||*(*(p+i)+0)=='_'||(*(*(p+i)+0)>='a'&&*(*(p+i)+0)<='z'))
			k=1;
		for(j=0;*(*(p+i)+j)!='\0';j++)
		{
			if((*(*(p+i)+j)>='0'&&*(*(p+i)+j)<='9')||(*(*(p+i)+j)>='A'&&*(*(p+i)+j)<='Z')||*(*(p+i)+j)=='_'||(*(*(p+i)+j)>='a'&&*(*(p+i)+j)<='z'))
				m=m+0;
			else
				m=m+1;
		}
		if(k==1&&m==0)
			printf("1\n");
		else
			printf("0\n");
	}
} 