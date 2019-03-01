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
	int i,j,k,n;
	char a[102]={'\0'};
	char b[102]={'\0'};
	char*p;
	gets(a);
    n=strlen(a);
	j=0;
	p=a;
	for(i=0;i<n;i++)
	{
		k=i+1;
		if(k>=n)
		{k=k-n;}
		b[j]=*(p+i)+*(p+k);
		j++;
	}
    puts(b);
	return 0;
}

