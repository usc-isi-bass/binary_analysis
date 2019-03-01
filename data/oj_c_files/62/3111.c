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

void del(char a[100],int k,int n)
{
	int i;
	for (i=k;i<=n;i++) a[i]=a[i+1];
}

int main()
{
	char a[100]; int i,n;
	gets(a); n=strlen(a);
	i=1;
	while (i<=n)
		if ((a[i-1]==' ')&&(a[i]==' ')) 
		{
			del(a,i,n);
			n--;
		} else i++;
	puts(a);
	return 0;
}
	
