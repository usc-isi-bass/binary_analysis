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
	int i,j=0,k=0;
	char a[100];
	for(i=0;;i++)
	{
		scanf("%c",&a[i]);
		if(a[i]=='\n')
			break;
	}
	j=i;
	for(i=0;i<j;i++)
	{
		if(a[i]>'Z')
		a[i]=a[i]-32;
    }
	for(i=0;i<j;i++)
	{
		k+=1;
		if(a[i+1]!=a[i])
		{	
			printf("(%c,%d)",a[i],k);
			k=0;
		}
	}
}
	






