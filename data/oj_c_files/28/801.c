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
	char a[10000]={'\0'};
	int n[300]={0},i,j=0,k;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]!=' ')
			n[j]++;
		else
			j++;
	}
	k=j;
	for(j=0;j<k;j++)
		if(n[j]!=0)
		    printf("%d,",n[j]);
	printf("%d\n",n[k]);
}