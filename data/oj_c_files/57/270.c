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
	int n,i,l;
	char s[50][50],*p[50];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",s[i]);
		l=strlen(s[i]);
		p[i]=s[i]+l-1;
		if(*p[i]=='r')
			*(p[i]-1)='\0';
		if(*p[i]=='y')
			*(p[i]-1)='\0';
		if(*p[i]=='g')
			*(p[i]-2)='\0';
	}
	for(i=0;i<n;i++)
		printf("%s\n",s[i]);
}
		
