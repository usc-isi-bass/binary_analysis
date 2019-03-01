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
	char a[256];
	scanf("%d",&n);
	scanf("%c",&a[0]);
	for(i=0;i<n;i++)
	{
		j=0;
		while(j<=255)
		{
			scanf("%c",&a[j]);
			if(a[j]=='A') printf("T");
			else if(a[j]=='T') printf("A");
			else if(a[j]=='C') printf("G");
			else if(a[j]=='G') printf("C");
			else break;
			j=j+1;
		}
		printf("\n");
	}
	return 0;
}