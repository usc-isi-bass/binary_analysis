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
	char str[100],a[100],b[100];
	int i=0,j=0,k=0,m=0,n=0;
	gets(str);
	gets(a);
	gets(b);
	n=strlen(str);	
	char words[100][100]={0};
	for(k=0;k<n;k++)
	{
		if(str[k]!=32)
		{
			words[i][j]=str[k];
			j++;
		}
		else if(str[k]==32)
		{
			i++;
			j=0;
		}
	}
	m=i+1;
	for(i=0;i<m;i++)
	{
		if(strcmp(words[i],a)==0)
			strcpy(words[i],b);
		else continue;
	}
	for(i=0;i<m-1;i++)
		printf("%s ",words[i]);
	printf("%s\n",words[m-1]);
}






