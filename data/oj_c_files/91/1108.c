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
	char zfc[100],qin[100];
	int n,ascii[100],i,a;
	gets(zfc);
	n=strlen(zfc);
	
	for(i=0;i<n;i++)
	{
        ascii[i]=zfc[i];
	}

	a=ascii[0]+ascii[n-1];

	for(i=0;i<n-1;i++)
	{
		ascii[i]=ascii[i]+ascii[i+1];
	}

	ascii[n-1]=a;

	for(i=0;i<n;i++)
	{
		qin[i]=ascii[i];
	}

	for(i=0;i<n;i++)
	{
		printf("%c",qin[i]);
	}
	return 0;
}


