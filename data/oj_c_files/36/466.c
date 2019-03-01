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
	char a[300],b[300];
	int c[52]={0},d[52]={0},i,j;
	scanf("%s %s",a,b);
	for(i=0;i<26;i++)
	{
		for(j=0;j<strlen(a);j++)
			if(a[j]=='A'+i)
				c[i]++;
		for(j=0;j<strlen(b);j++)
			if(b[j]=='A'+i)
				d[i]++;
	}
	for(;i<52;i++)
	{
		for(j=0;j<strlen(a);j++)
			if(a[j]=='a'+i-26)
				c[i]++;
		for(j=0;j<strlen(b);j++)
			if(b[j]=='a'+i-26)
				d[i]++;
	}
	for(i=0;i<52;i++)
		if(c[i]!=d[i])
		{
			printf("NO");
			break;
		}
	if(i==52) printf("YES");
}