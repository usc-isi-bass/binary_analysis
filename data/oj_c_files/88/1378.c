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
	int i,j=0;
	char c[30],str[30];
	gets(c);
	for (i=0;c[i-1]!='\0';i++)
		if(c[i]<='9'&&c[i]>='0')
			str[j]=c[i],j++;
		else
			if(j!=0)
			str[j]='\0',printf("%s\n",str),j=0;
		return 0;
}

