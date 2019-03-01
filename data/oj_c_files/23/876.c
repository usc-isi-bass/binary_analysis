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
	char *a[100],c='\n';int i;
	for(i=0;;)
	{
		a[i]=(char *)malloc(100*sizeof(char));
		scanf("%s",a[i]);i++;
		if(c==getchar()) break;
	}
	for(i=i-1;i>=0;i--)
	if(i!=0) printf("%s ",a[i]);
	else printf("%s",a
		[i]);
}