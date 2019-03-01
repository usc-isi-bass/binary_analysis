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
	int i,n,p;
	char a[260];
	scanf("%d",&n);
	scanf("\n");
	for(i=0;i<n;i++)
	{
		p=0;
		do
		{
	    scanf("%c",&a[p]);
		switch(a[p])
		{
		    case 'A': a[p] = 'T'; break;
			case 'T': a[p] = 'A'; break;
			case 'G': a[p] = 'C'; break;
			case 'C': a[p] = 'G'; break;
		}
	    printf("%c",a[p]);
		p=p+1;
		}while(a[p-1]!='\n');
	}
	return 0;
}


