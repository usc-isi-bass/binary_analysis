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
	int i,b=0;
	char a[1000];
	gets(a);
	for(i=0;i<1000;i++)
	{

		if(a[i]=='\0')
		{printf ("\n");break;}

		if(a[i]!=' ')
		{
			b=0;
			printf ("%c",a[i]);
		}
		else
			b=b+1;
		
		if(b==1)
			printf (" ");
		else
			continue;
	}
	return 0;
}
