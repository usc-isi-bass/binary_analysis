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
	int i,k,n,max; char a[20],b[4];
	while(scanf("%s%s",a,b)!=EOF)
	{
		n=strlen(a);
		k=n-1;
		max=a[n-1];
		for(i=n-1;i>0;i--)
		if(a[i-1]>=max){max=a[i-1];k=i-1;}
		for(i=0;i<=k;i++)printf("%c",a[i]);
		printf("%c%c%c",b[0],b[1],b[2]);
		for(i=k+1;i<=n-1;i++)printf("%c",a[i]);
		printf("\n");
	}
}