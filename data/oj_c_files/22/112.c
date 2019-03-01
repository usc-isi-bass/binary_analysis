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


void main ()
{
	int n[300];
	char c;
	int i,j;
	int max=0,sec_max=0;

	scanf("%d",&n[0]);

	for(i=1;;i++)
	{
		if((c=getchar())!=',') break;
		scanf("%d",&n[i]);
	}

	for(j=0;j<i;j++)
	{
		if(n[j]>max) max=n[j];
	}

	for(j=0;j<i;j++)
	{
		if(n[j]==max) n[j]=0;
	}

	for(j=0;j<i;j++)
	{
		if(n[j]>sec_max) sec_max=n[j];
	}

    if(sec_max==0) printf("No");
	else printf("%d",sec_max);
}