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
	int i,j,n,n1;
	char a[50],b[50];
	scanf("%s%s",a,b);
    n=strlen(a);n1=strlen(b);
	for(i=0;i<n1-n;i++)
	{
		for(j=0;j<n;j++)
			if(b[i+j]!=a[j])break;
		if(j==n)break;
	}
	printf("%d",i);
	return 0;
}