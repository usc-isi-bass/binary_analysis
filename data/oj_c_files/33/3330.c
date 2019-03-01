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
	int n;
	char a[256]={'\0'},b[256]={'\0'};
	int i,j;
	scanf("%d",&n);
	getchar();
	for(j=0;j<n;j++)
	{
		for(i=0;i<256;i++)
		{
			a[i]='\0';
			b[i]='\0';
		} 
		gets(a);
		for(i=0;a[i]!='\0' && i<255;i++)
		{
			if(a[i]=='A')
			b[i]='T';
			if(a[i]=='T')
			b[i]='A';
			if(a[i]=='C')
			b[i]='G';
			if(a[i]=='G')
			b[i]='C';
		}
		puts(b);
	}
	return 0;
} 
