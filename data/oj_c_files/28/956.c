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


char a[300];

int main()
{

	gets(a);
	int n=strlen(a);


	int p=0,q=0,m=0;
	while(p<n&&q<n)
	{
		while(a[p]==' ')
			p++;

		q=p;

		while(a[q]!=' '&&a[q]!=0)
			q++;
		if(m==0)

		    printf("%d",q-p);
		else
			printf(",%d",q-p);
		p=q;
		m++;
	}


	
	return 0;
         
}
