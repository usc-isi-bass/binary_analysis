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
	int n,i=1,j,len;
	char a[100]={0};
	scanf("%d",&n);
	while(i<=n+1)
	{
		gets(a);
		len=strlen(a);
		if((a[len-1]=='r'&&a[len-2]=='e')||(a[len-1]=='y'&&a[len-2]=='l'))
		{
		for(j=0;j<=len-3;j++)
		printf("%c",a[j]);
		printf("\n");
		}
		if(a[len-3]=='i'&&a[len-2]=='n'&&a[len-1]=='g')
		{
			for(j=0;j<=len-4;j++)
			printf("%c",a[j]);
			printf("\n");
		}
		i++;
	}
}