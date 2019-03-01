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
	char a[100],b[100];
	char c[52];
	int d[52]={0},e[52]={0};
	int j,i,m,n;
	scanf("%s %s",a,b);
	for(i=0;i<26;i++)
		c[i]=65+i;
	for(i=26;i<52;i++)
		c[i]=71+i;
	
	
	m=strlen(a);n=strlen(b);
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<52;j++)
		if(a[i]==c[j])
			d[j]++;
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<52;j++)
		if(b[i]==c[j])
			e[j]++;
	}
	
	for(i=0;i<52;i++)
	{
		if(d[i]!=e[i])
			break;
	}
	if(i==52)
		printf("YES");
	else
		printf("NO");
}