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
	char a[301],b[53];
	int i,j,n=0,flag=0;
	
	for(i=0;i<26;i++)
	{
		char zm=i+65;
		b[i]=zm;
	}
	for(i=26;i<52;i++)
	{
		char zm=i+71;
		b[i]=zm;
	}
	b[52]='\0';
	scanf("%s",a);
	int len=strlen(a);
	for(i=0;i<52;i++)
	{
		for(j=0;j<len;j++) if(b[i]==a[j]) n++;
		if(n!=0) {printf("%c=%d\n",b[i],n);flag=1;}
		n=0;
	}
	if(!flag)	printf("No\n");
	
}