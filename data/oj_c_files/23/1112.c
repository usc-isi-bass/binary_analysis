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

void main()
{
	int i,n,j,k=0,l;
	char a[200],b[20][20];
	gets(a);
	n=strlen(a);
	for(i=n-1,j=0;i>=0;i--)
	{
		if(a[i]!=' '){b[j][k]=a[i];k++;}
		else
		{
			for(l=k-1;l>=0;l--)printf("%c",b[j][l]);
			printf(" ");
			k=0;
			j=j+1;
		}
	}
	for(l=k-1;l>=0;l--)printf("%c",b[j][l]);
}