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
	char a[100][20],b[100][20],temp1[4],temp2[3];
	int l,i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s",a[i]);
	}
	for(i=1;i<=n;i++)
	{
		l=strlen(a[i]);
		temp1[0]=a[i][l-3];
		temp1[1]=a[i][l-2];
		temp1[2]=a[i][l-1];
		temp1[3]='\0';
		temp2[0]=a[i][l-2];
		temp2[1]=a[i][l-1];
		temp2[2]='\0';

		if((strcmp(temp2,"er")==0)||(strcmp(temp2,"ly")==0))
		{
			strncpy(b[i],a[i],l-2);
			b[i][l-2]='\0';
		}
		else if(strcmp(temp1,"ing")==0)
		{
			strncpy(b[i],a[i],l-3);
			b[i][l-3]='\0';
		}
		else 
			strcpy(b[i],a[i]);

		printf("%s\n",b[i]);
	}
}