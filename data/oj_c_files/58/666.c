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
	char a[82],*p=a;
	int n,i,j,k,l;
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		gets(a);
		l=strlen(a);
		k=0;
		for(j=0;j<l;j++)
		{
			if(j==0 && ((*(p+j)>='A' && *(p+j)<='Z') || (*(p+j)>='a' && *(p+j)<='z') || *(p+j)=='_'))
				k++;
			if(j!=0 && ((*(p+j)>='0' && *(p+j)<='9') || (*(p+j)>='A' && *(p+j)<='Z') || (*(p+j)>='a' && *(p+j)<='z') || *(p+j)=='_'))
				k++;
		}
		if(k==l)
			printf("1\n");
		else
			printf("0\n");
	}
	return 0;
}