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
	int i=1,j,m,n,p,s=0;
	gets(a);
	for(i=1;i<=100;i++)
	{
		if(a[i-1]!='\0')
			s=s+1;
		else
			break;
	}
	m=a[0];
	a[s]=m;
	for(j=1;j<=s;j++)
	{
		n=a[j-1];
		p=a[j];
		printf("%c",n+p);
	}
	return 0;
}





