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

void dajianfa(char a[],char b[]);

void main ()
{
	int n;
	char a[100];
	char b[100];
	int i;
	char nouse;

	scanf("%d%c",&n,&nouse);
    
	for (i=0;i<n;i++)
	{
		gets(a);
		gets(b);

		dajianfa(a,b);
		if(i!=n-1) gets(b);
	}
}

void dajianfa(char a[],char b[])
{
	int len1,len2;
	int i;

	len1=strlen(a);
	len2=strlen(b);

	for(i=1;i<=len2;i=i+1)
	{
		if(a[len1-i]>=b[len2-i]) a[len1-i]=a[len1-i]-b[len2-i]+48;
		else {
			a[len1-i-1]-=1;a[len1-i]=a[len1-i]-b[len2-i]+58;
		}
	}

	a[len1]='\0';
	puts(a);
}