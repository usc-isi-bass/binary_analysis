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
	char (*a)[100],c[100][100];
	int i;
	a=c;
	for(i=0;;i++)
	{scanf("%s",c[i]);
	if(getchar()=='\n') break;}
	for(a=c+i;a!=c;a--)
		printf("%s ",*a);
       printf("%s",*a);
}