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
	int l,i,j=0,k=0;
	char s[100],a[20],b[20],str[50][20]={" "},(*p)[20];
	gets(s);
	scanf("%s",a);
	scanf("%s",b);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		if(s[i]!=' ')
			str[j][k++]=s[i];
		else
		{
			j++;
			k=0;
		}
		if(s[i+1]=='\0')
			j++;
	}
	p=&str[0];
	for(i=0;i<j;i++)
	{
		if(strcmp(a,*(p+i))==0)
			strcpy(*(p+i),b);
	}
	for(i=0;i<j;i++)
	{
		if(i==0)
	    	printf("%s",*(p+i));
		else
			printf(" %s",*(p+i));
	}
	
}


		


	