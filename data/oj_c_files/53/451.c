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
{long int n,i,c[50001],a[500];
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<=50000;i++)
		c[i]=0;
	printf("%d",a[1]);c[a[1]]=1;
	for (i=2;i<=n;i++)
	
	{
		if(c[a[i]]==0){printf(",%d",a[i]);c[a[i]]=1;}
	}
}
