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

void paixu(char a[])
{
	int i,j;
	char b;
	for(i=0;i<strlen(a)-1;i++)
	{
		for(j=0;j<strlen(a)-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				b=a[j];
		     	a[j]=a[j+1];
		    	a[j+1]=b;
			}
		}
	}
}
void main()
{
	char a[100],b[100];
	scanf("%s%s",a,b);
	paixu(a);
	paixu(b);
	if(strcmp(a,b)==0)
		printf("YES");
	else 
		printf("NO");
}