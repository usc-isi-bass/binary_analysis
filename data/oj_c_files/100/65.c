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
	char a[100]={'\0'};
	int b[26]={0};
	int i,j,k;
	scanf("%s",a);
	for (i=0;a[i]!='\0';i++)
		if (a[i]>=97&&a[i]<=122)
		{
			k=a[i]-97;
			b[k]++;
		}
	k=0;
	for (j=0;j<=25;j++)
	{
		if (b[j]!=0) 
		{
			printf("%c=%d\n",j+97,b[j]);
		    k++;
		}
	}
	if (k==0) printf("No\n");
}