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

main()
{
	char a[10000];
	int i,x=0;
	gets(a);
	for(i=0;i<20000;i++)
	{
		if(a[i]!=' '&&a[i]!='\0') x=x+1;
		if(a[i]==' ')
		{
			if(x!=0) printf("%d,",x);
			x=0;
		}
		if(a[i]=='\0')
		{
			if(x!=0) printf("%d",x);
			break;
		}
	}
}