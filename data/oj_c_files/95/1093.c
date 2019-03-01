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
	char a[80],b[80],i;
	gets(a);
	gets(b);
	for(i=0;i<80;i++)
	{
		if((a[i]>64)&&(a[i]<91))
		{
			a[i]=a[i]+32;
		}
	}
	for(i=0;i<80;i++)
	{
		if((b[i]>64)&&(b[i]<91))
		{
			b[i]=b[i]+32;
		}
	}
	if(strcmp(a,b)>0) printf(">\n");
	if(strcmp(a,b)==0) printf("=\n");
	if(strcmp(a,b)<0) printf("<\n");
	return 0;
}
