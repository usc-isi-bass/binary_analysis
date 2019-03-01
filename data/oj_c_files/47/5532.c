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

int main(int argc, char* argv[])
{
	int n;
	scanf("%d",&n);
	int org[100],opp[100];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&org[i]);
	}
	for(i=0;i<n;i++)
	{
		opp[i]=0;
	}
	for(i=0;i<n;i++)
	{
		opp[n-1-i]=org[i];
	}
	int k;
	for(k=0;k<n-1;k++)
	{
		printf("%d ",opp[k]);
	}
	printf("%d",opp[n-1]);
	return 0;
}