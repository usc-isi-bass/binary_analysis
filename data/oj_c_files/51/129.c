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
	char s[505],n,x[505]={0},max=1,k;
	int i,j;
	scanf("%d",&n);
	scanf("%s",s);
	int l=strlen(s);
	for(i=0;i<l-n+1;i++)
	{
		for(j=i;j<l-n+1;j++)
		{
			for(k=0;k<n;k++)
				if(s[i+k]!=s[j+k])break;
			if(k==n)x[i]++;
		}
	}
	for(i=0;i<l;i++)if(x[i]>max)max=x[i];
	if(max==1)printf("NO");
	else
	{
		printf("%d\n",max);
		for(i=0;i<l;i++)if(x[i]==max)
		{
			for(k=0;k<n;k++)printf("%c",s[i+k]);
			printf("\n");
		}
	}
}
