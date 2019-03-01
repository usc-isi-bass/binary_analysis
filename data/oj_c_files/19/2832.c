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
	int i,j=0,k=0,len;
	char  s[100]={'\0'},a[100]={'\0'},b[100]={'\0'},temp[100][100]={'\0'};
	gets(s);
	gets(a);
	gets(b);
//	printf("%s\n",s);
//	printf("%s\n",a);
	len=strlen(s);
	for(i=0;i<len;i++)
	{
		if(s[i]!=' ')
		{
			temp[j][k]=s[i];
			k++;
		}
		else
		{
			k=0;
			j++;
		}
	}
	for(i=0;i<=j;i++)
	{
	//	printf("%s\n",temp[i]);
		if(strcmp(a,temp[i])==0)
		{
			if(i==0)
				printf("%s",b);
			else
				printf(" %s",b);
		}
		else if(i==0)
			printf("%s",temp[i]);
		else
			printf(" %s",temp[i]);
	}
}
