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
	int n,a,b,c,i,s1=0,s2=0,s3=0,s4=0;
	char m[1000],t[1000];
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%s",m);
		strcpy(t,m);
		for(b=0;b<(strlen(m));b++)
		{
			if(m[b]=='A')
			{
				t[b]='T';
			}
			if(m[b]=='T')
			{
				t[b]='A';
			}
			if(m[b]=='C')
			{
				t[b]='G';
			}
			if(m[b]=='G')
			{
				t[b]='C';
			}
		}
		printf("%s\n",t);
	}	
	return 0;
}

