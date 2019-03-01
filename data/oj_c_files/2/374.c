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


int main()
{
	int m;
	int book[1020];
	scanf("%d",&m);
	int i;
	char c;
	int a[27]={0};
	int b[27][1000]={0};
	for(i=1;i<=m;i++)
	{
		scanf("%d",&book[i]);
		getchar();
		for(;;)
		{
			scanf("%c",&c);
			if(c=='\n') break;
			a[c-64]+=1;
			b[c-64][i]=1;
		}
	}
	int max=0,p;
	for(i=1;i<27;i++)
	{
		if(a[i]>max) 
		{
			max=a[i];
			p=i;
		}
	}
	printf("%c\n%d\n",p+64,max);
	for(i=0;i<1000;i++)
	{
		if(b[p][i]==1) printf("%d\n",book[i]);
	}
	return 0;
}