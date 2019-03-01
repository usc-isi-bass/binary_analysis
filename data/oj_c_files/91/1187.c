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


void main()
{
	int len,i;
	char s[1000];
	gets(s);
	len=strlen(s);
	for (i=0;i<len-1;i++)
      printf("%c",(int)(s[i])+(int)(s[i+1]));
	printf("%c\n",(int)(s[0])+(int)(s[len-1]));
}