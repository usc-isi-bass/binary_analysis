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
	char a[300];int i,j,n,t,s=0;
	gets(a);
	for(i=0;;i++)
	{
		if(a[i]=='\0')
			break;
	}
	n=i;
	for(i=97;i<=122;i++)
	{
		t=0;
		for(j=0;j<n;j++)
		{
			if(a[j]==i)
				t++;
		}
		if(t!=0)
		{
			printf("%c=%d\n",i,t);
			s++;
		}
	}
	if(s==0)
		printf("No\n");
}