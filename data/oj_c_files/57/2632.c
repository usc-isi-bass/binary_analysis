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
	int i,j,t,n,l,k;
	char a[30],b[1000];
	scanf("%d",&n);
	for(j=0;j<30;j++)
		a[j]='\0';
	for(j=0;j<1000;j++)
		b[j]='\0';
	for(i=0,k=0;i<n;i++)
	{
		for(j=0;j<30;j++)
			a[j]='\0';
		scanf("%s",a);
		l=strlen(a);
		if(a[l-1]=='r'&&a[l-2]=='e')
		{
			for(j=k,t=0;t<l-2;j++,t++)
				b[j]=a[t];
			b[j]='\n';
			k=k+l-1;
		}
		else if(a[l-1]=='y'&&a[l-2]=='l')
		{
			for(j=k,t=0;t<l-2;j++,t++)
				b[j]=a[t];
			b[j]='\n';
			k=k+l-1;
		}
		else if(a[l-1]=='g'&&a[l-2]=='n'&&a[l-3]=='i')
		{
			for(j=k,t=0;t<l-3;j++,t++)
				b[j]=a[t];
			b[j]='\n';
			k=k+l-2;
		}
		else 
		{
			for(j=k,t=0;t<l;j++,t++)
				b[j]=a[t];
			b[j]='\n';
			k=k+l+1;
		}
	}
			printf("%s",b);
}