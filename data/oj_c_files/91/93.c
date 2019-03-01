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

int main()
{
	char cha[500];
	gets(cha);
	int i=0,b;
	for(i=0;cha[i]!='\0';i++)
	{
		if(cha[i+1]=='\0')
		{
			b=(int)cha[i]+(int)cha[0];
			printf("%c",b);
		}
		else
		{
			b=(int)cha[i]+(int)cha[i+1];
			printf("%c",b);
		}
	}
	return 0;
}