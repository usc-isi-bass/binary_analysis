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
	int n,m,i,j,l;
	char a[50];
	
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		scanf("%s",a);
		l=strlen(a);
		if (a[l-1]=='g') {for (j=0;j<=l-4;j++) printf("%c",a[j]);printf("\n");}
		else {for (j=0;j<=l-3;j++) printf("%c",a[j]);printf("\n");}
	}


	return 0;
}