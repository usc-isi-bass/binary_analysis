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
	char a[100];
	int t,b=0,k=0,i;
	gets(a);
	t=strlen(a);
	for(i=0;i<t;i++)
	{
		b=b*10+a[i]-48;
		if(b>=13)
		{
			k=1;
			printf("%d",b/13);
			b=b%13;
		}
		else if(k) printf("0");
	}
	if(!k)printf("0");
	printf("\n%d",b);
}
