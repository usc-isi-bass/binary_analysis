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
{  char string[100];
	int i;
	char c;
	gets(string);
   for(i=0;c=string[i]!='\0';i++)
   if(c=string[i]!=' ')
   printf("%c",string[i]);
   else
   if(c=string[i-1]!=' ')
   printf("%c",string[i]);
   else continue;
   printf("%c",'\n');
	return 0;
}