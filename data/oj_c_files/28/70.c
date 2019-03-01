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
	char a[300][100]={0};
	int i,k,j;
          k=0;
	for(i=0;i<=300;i++)
	{
	scanf("%s",a[i]);
         if(strlen(a[i])!=0)k=k+1;
	}
	
	if(k>1)
	{
		printf("%d",strlen(a[0]));
		for(i=1;i<k;i++)
			printf(",%d",strlen(a[i]));
	}
	if(k==1)
	{
		printf("%d",strlen(a[0]));
	}
}