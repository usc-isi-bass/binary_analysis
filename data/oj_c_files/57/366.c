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
	char a[50][50];
	int i,t[50],j,n;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{	scanf("%s",a[i]);
        t[i]=strlen(a[i]);
	}
	for (i=0;i<n;i++)
	{
	if (a[i][t[i]-2]=='e'&&a[i][t[i]-1]=='r')
	{	for (j=0;j<t[i]-3;j++)
			printf("%c",a[i][j]);
	    printf("%c\n",a[i][t[i]-3]);
	}
	if (a[i][t[i]-2]=='l'&&a[i][t[i]-1]=='y')
	{	for (j=0;j<t[i]-3;j++)
			printf("%c",a[i][j]);
	    printf("%c\n",a[i][t[i]-3]);
	}
	if (a[i][t[i]-3]=='i'&&a[i][t[i]-2]=='n'&&a[i][t[i]-1]=='g')
	{	for (j=0;j<t[i]-4;j++)
			printf("%c",a[i][j]);
	    printf("%c\n",a[i][t[i]-4]);
	}
	}
}