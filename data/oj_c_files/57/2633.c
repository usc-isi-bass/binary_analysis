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
	int i,j,n,l;
	char a[30]={""},b[1000]={""};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a);
		l=strlen(a);
		if(a[l-1]=='r'&&a[l-2]=='e')
		{
			for(j=0;j<l-2;j++)
				printf("%c",a[j]);
			printf("\n");
		}
		else if(a[l-1]=='y'&&a[l-2]=='l')
		{
			for(j=0;j<l-2;j++)
				printf("%c",a[j]);
			printf("\n");
		}
		else if(a[l-1]=='g'&&a[l-2]=='n'&&a[l-3]=='i')
		{
			for(j=0;j<l-3;j++)
				printf("%c",a[j]);
			printf("\n");
		}
		else printf("%s\n",a);
	}
}