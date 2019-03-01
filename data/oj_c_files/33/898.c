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
	char zfc[256];
	char ans[256];
	int n;
	scanf("%d",&n);
	for(int i=0;i<=n-1;i++)
	{
		scanf("%s",zfc);
		for(int j=0;j<=255;j++)
		{
			if(zfc[j]=='A')ans[j]='T';
			if(zfc[j]=='T')ans[j]='A';
			if(zfc[j]=='G')ans[j]='C';
			if(zfc[j]=='C')ans[j]='G';
			if(zfc[j]=='\0')ans[j]='\0';
		}
		printf("%s\n",ans);
	}
	return 0;
}
