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
	int n,a=0;
	int i,j,k;
	char sf[50][100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",sf[i]);
	}
	for(i=0;i<n;i++)
	{
		a=strlen(sf[i]);
		for(j=0;j<a;j++)
		if((sf[i][a-2]=='e'&&sf[i][a-1]=='r')||(sf[i][a-2]=='l'&&sf[i][a-1]=='y'))
		{
			sf[i][a-2]='\0';
		}
		if(sf[i][a-3]=='i'&&sf[i][a-2]=='n'&&sf[i][a-1]=='g')
		{
			sf[i][a-3]='\0';
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%s\n",sf[i]);
	}
	return 0;
}