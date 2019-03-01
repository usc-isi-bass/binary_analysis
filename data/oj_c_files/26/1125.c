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
	char c[1000];
	int n,i,j,k;
	gets(c);
	n=strlen(c);
	for(i=0;i<n;i++)
	{
		if(c[i]!=' ') printf("%c",c[i]);
		else if(c[i]==' ') 
		{
			if(c[i-1]!=' ') printf(" ");
		}
	}
	scanf("%d",&i);
	return 0;
}