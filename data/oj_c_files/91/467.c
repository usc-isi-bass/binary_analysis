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
	char words1[300],k;
	int i,n=0;
	gets(words1);
	k=words1[0];
	for(i=0;words1[i];i++)
	{
		n++;
	}
	for(i=0;i<n-1;i++)
	{
		words1[i]=words1[i]+words1[i+1];
	}
	words1[n-1]=words1[n-1]+k;
	for(i=0;i<n;i++)
	{
		printf("%c",words1[i]);
	}
	return 0;
}
