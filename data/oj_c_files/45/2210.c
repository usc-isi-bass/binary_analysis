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

int main()
{
	char s[50],w[50],e[50][50];
	int i,j,m,n;
	scanf("%s %s",s,w);
	m=strlen(s);
	n=strlen(w);
	for(i=0;w[i+m-1]!='\0';i++)
	{
		for(j=0;j<m;j++)
		{
			e[i][j]=w[i+j];
		}
	e[i][j]='\0';
}
for(i=0;i<n-m+1;i++)
{
	if(strcmp(e[i],s)==0) 
	break;
}

printf("%d\n",i);
return 0;
}