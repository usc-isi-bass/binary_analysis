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
	int a,i,m=0,n=0;
	char c;
	for(i=1;i>0;)
	{
		scanf("%d",&a);
		scanf("%c",&c);
		if(a>m)
		{
			n=m;
			m=a;
		}
		else if(a>n&&a<m) n=a;
		if (c=='\n') break;
	}
	if(n!=0) printf("%d",n);
	else printf("No");

	return 0;
}