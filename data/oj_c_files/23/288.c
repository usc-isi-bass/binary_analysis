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
	char a[100];
	gets(a);
	int count[100],i,k=1,j,m;
	count[0]=0;
	for(i=1;i<strlen(a);i++)
	{
		if(a[i-1]==32&&a[i]!=32)
		{
			count[k]=i;
		    k++;
		}
	}
	for(m=count[k-1];m<strlen(a);m++)
    printf("%c",a[m]);
	for(j=k-2;j>=0;j--)
	{
		printf(" ");
		for(m=count[j];m<count[j+1]-1;m++)
			printf("%c",a[m]);
	}
	return 0;
}