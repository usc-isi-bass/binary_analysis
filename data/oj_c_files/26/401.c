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
      char a[1000];
	gets(a);
	printf("%c",a[0]);
	for(int i=1;;i++)
	{
		if ( (a[i]!=' ' || a[i-1]!=' ' )&&a[i]!='\0')
			printf("%c",a[i]);
		if(a[i]=='\0')
			break;
	}
	return 0;}
