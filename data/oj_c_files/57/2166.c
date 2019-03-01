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

/*???????er?ly?ing?????? ???????????er?ly?ing?
 ?????????????????*/

void doit(char a[])
{
	int n;
	n=strlen(a);
	if(a[n-1]=='r'&&a[n-2]=='e')a[n-1]=a[n-2]='\0';
	if(a[n-1]=='y'&&a[n-2]=='l')a[n-1]=a[n-2]='\0';
	if(a[n-1]=='g'&&a[n-2]=='n'&&a[n-3]=='i')a[n-1]=a[n-2]=a[n-3]='\0';
}

void main()
{
	int i,n;
	char a[50][10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
	}
	for(i=0;i<n;i++)
	{
		doit(a[i]);
		printf("%s\n",a[i]);
	}
}