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

int main ()
{
	char a[100] ;
	int i,j, flag , mark;
	j=6;
	while (j--)
{flag = 0 ;
	mark = 0 ;
scanf ("%s",a);

	if (!strcmp(a,"0"))
	{
		printf ("%s\n",a);
		return 0;
	}
	if (a[0]=='-')
	{
		printf ("-") ;
		flag++ ;
	}
	for (i = strlen(a)-1;i>=flag;i--)
	{
		if (a[i]!='0'||mark==1)
		{
			printf("%c",a[i]);
			mark = 1;
		}
	}
printf("\n");
}
}