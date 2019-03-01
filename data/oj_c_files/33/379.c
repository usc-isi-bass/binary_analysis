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
    char a[255];
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
        if(i!=0)
			printf("\n");
	    scanf("%s",&a);
		for(j=0;j<strlen(a);j++)
		{
			if(a[j]=='A')
				printf("T");
			if(a[j]=='T')
				printf("A");
			if(a[j]=='C')
				printf("G");
			if(a[j]=='G')
				printf("C");
		}
		memset(a,0,sizeof(a));
	}
	return 0;
}
