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
	char a[500],b=' ';
    int i;
	gets(a);
	for(i=0;a[i]!=0;i++)
	{
		while((a[i]==b)&&(a[i+1]==b))
		{
			i++;
		}
		printf("%c",a[i]);
    }
}