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
	char s[101],a[101][101];
	int i,l,j=0,k=0;

	gets(s);

	l=strlen(s);

	for(i=0;i<l;i++)
		if(s[i]==' ')
		{	a[k][j]=0;
		    k++;
			j=0;
		}
		else
			a[k][j++]=s[i];


	a[k][j]=0;


	for(i=0;i<k;i++)
	  if(strlen(a[i]))
		printf("%s ",a[i]);
	printf("%s",a[k]);
	return 0;
}

