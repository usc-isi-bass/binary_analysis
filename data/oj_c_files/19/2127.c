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

int main ()
{
	char s[100],a[100],d[100],b[100][50];
	int i,j=0,k=0,n,m,l;
	gets(s);
	scanf("%s",a);
	scanf("%s",d);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		if(s[i]!=' ')
		{
			b[j][k]=s[i];
			k++;
		}
		else
		{
			b[j][k]='\0';
			j++;
			k=0;
		}
	}
	b[j][k]='\0';
	for(m=0;m<j+1;m++)
	{
		l=strcmp(a,b[m]);
		if(l==0) strcpy(b[m],d);
		if(m==0) printf("%s",b[m]);
		else printf(" %s",b[m]);
	}
	return 0;
}