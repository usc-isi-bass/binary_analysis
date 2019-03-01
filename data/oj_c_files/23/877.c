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
	char *a[30];int i;
	for(i=0;;i++)
	{
		a[i]=(char *)calloc(1,20*sizeof(char));
		scanf("%s",a[i]);
		if(getchar()=='\n') break;
	}
	for(;i>=0;i--)
		if(i==0) printf("%s",a[i]);
		else printf("%s ",a[i]);
}