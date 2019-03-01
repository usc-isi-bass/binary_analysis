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
{int i=0,len,w=0;
char a[101]={'\0'};
gets(a);
len=strlen(a);
while(i<len)
{ if(w!=1||a[i]!=' ')
		printf("%c",a[i]);
   if(a[i]==' ')
		w=1;
	else
		w=0;
i++;}
}