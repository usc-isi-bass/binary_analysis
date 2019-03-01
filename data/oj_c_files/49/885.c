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
	char a[500];
	int r,i,j,k,n,m;
	scanf("%s",a);
	r=strlen(a);
	for(i=2;i<=r;i++)
	{
		for(k=0;k<=r-i;k++)
		{m=k;n=k+i-1;
		while(m<n&&(a[m]==a[n]))
		{m++;n--;}
		if(m>=n) {for(j=k;j<=k+i-1;j++) {putchar(a[j]);	}putchar('\n');	}
		}
	}
	
	return 0;
	
}