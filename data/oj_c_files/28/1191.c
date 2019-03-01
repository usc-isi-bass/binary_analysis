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
	char strl[30000];
	int a[300]={0};
	char c;
	int x,y,i,j,k; j=0;
	gets(strl);
		for (i=0;(c=strl[i])!='\0';i++)
		{
			if(c!=' ')
	       a[j]=a[j]+1;
			if(c==' ')
				j++;
		}
		for(x=0;x<=j-1;x++)
			if(a[x]!=0)
			printf("%d,",a[x]);
		    printf("%d",a[j]);
}
