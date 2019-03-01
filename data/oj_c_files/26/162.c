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
char* str;
int i,l;
str = (char *)malloc(1000 * sizeof(char));
gets(str);
l=strlen(str);
for(i=0;i<l;i++,str++)
{
	if(*str==' '&&*(str+1)==' ') i=i;
	else
	
		printf("%c",*str);
	
	
	}
return 0;
}