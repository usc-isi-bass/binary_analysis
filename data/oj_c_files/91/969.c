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
	char c[101];
	gets(c);
	int len;
	len=strlen(c);
	int i;
	for(i=0;i<len;i++)
	{
		if(i==len-1)printf("%c",c[i]+(c[0]-' '+32));
		else printf("%c",c[i]+(c[i+1]-' '+32));
	}
}