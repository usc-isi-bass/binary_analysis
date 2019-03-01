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
	int n,i,j,a[100];
	char str[100][50];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s\n",str[i]);
		a[i]=strlen(str[i]);
	}
	for(i=0;i<n;i++)
	{
		if(str[i][a[i]-2]=='e'&&str[i][a[i]-1]=='r')
			for(j=0;j<a[i]-2;j++)
				printf("%c",str[i][j]);
			printf("\n");

        if(str[i][a[i]-2]=='l'&&str[i][a[i]-1]=='y')
		{
			for(j=0;j<a[i]-2;j++)
				printf("%c",str[i][j]);
			printf("\n");
		}
	    if(str[i][a[i]-3]=='i'&&str[i][a[i]-2]=='n'&&str[i][a[i]-1]=='g')
		{
			for(j=0;j<a[i]-3;j++)
				printf("%c",str[i][j]);
			printf("\n");
		}
	}
}
