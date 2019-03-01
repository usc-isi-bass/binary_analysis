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
	char a[3000],i;
	gets(a);
	for(i=0;i<(signed)strlen(a);i++)
	{
		printf("%c",a[i]);
		if(a[i]==' ')
		{
		for(;i<(signed)strlen(a);i++)
		{
			if(a[i+1]!=' ')
				break;
		}}
	}
			
}