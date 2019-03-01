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
	char a[50][20];
	char b[]="er",c[]="ly",d[]="ing";
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<20;j++)
		{
		if(a[i][j]=='\0')
		{
			if(strcmp(&a[i][j-2],b)==0||strcmp(&a[i][j-2],c)==0)
			{
				a[i][j-2]='\0';
				printf("%s\n",a[i]);
			}
			else if(strcmp(&a[i][j-3],d)==0)
			{
				a[i][j-3]='\0';
				printf("%s\n",a[i]);
			}
		}
		}
	}
}




