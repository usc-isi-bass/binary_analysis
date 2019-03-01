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
	int n,b[1000];
	char u[1000][256];
	char a='A',t='T',g='G',c='C';
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++)
	{
		scanf("%s",u[i]);
	}
		for(i=0;i<n;i++)
	{	
			b[i]=strlen(u[i]);
			for(j=0;j<b[i];j++)
	{	
		if(u[i][j]=='A')
		{u[i][j]='T';}
        else if(u[i][j]=='T')
		{	u[i][j]='A';}
		    else if(u[i][j]=='C')
		{	u[i][j]='G';}
		else if(u[i][j]=='G')
		{u[i][j]='C';}
		}
}
	for(i=0;i<n;i++)
	{	
	printf("%s\n",u[i]);
	}
return 0;
}