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
	int a,b[5],n,i;
	scanf("%d",&a);
        if(a!=0)
	{n=log10(a)+1;		
	for (i=0;i<=n-1;i++)
	{
		b[i]=(int)(a/pow(10,i))%10;		//??????????
	}
	for (i=0;i<=n-1;i++)
		printf("%d",b[i]);		//????
	printf("\n");}
        else printf("0");
	return 0;
}
