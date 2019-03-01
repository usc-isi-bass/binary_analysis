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
	int n,i,j;
	scanf("%d",&n);
	char as[50][50]={0};
	for(i=0;i<n;i++)
	{
		scanf("%s",as[i]);
	}
	for(i=0;i<n;i++)
	{
		int l=strlen(as[i]);
		if(as[i][l-2]=='e'&&as[i][l-1]=='r')
		{
			as[i][l-2]=0;
			as[i][l-1]=0;
		}
		if(as[i][l-2]=='l'&&as[i][l-1]=='y')
		{
			as[i][l-2]=0;
			as[i][l-1]=0;
		}
		if(as[i][l-3]=='i'&&as[i][l-2]=='n'&&as[i][l-1]=='g')
		{
			as[i][l-3]=0;
			as[i][l-2]=0;
			as[i][l-1]=0;
		}
		printf("%s\n",as[i]);
	}
}











