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
char str[100];
int i,j,a;
gets(str);
a=strlen(str); 
for(i=strlen(str)-1;i>=0;i--)
   {
	if(str[i]==' ')
	{for(j=i+1;j<a;j++)
	 printf("%c",str[j]);
	 printf(" ");
	 a=i;
	}
   }
for(i=0;i<strlen(str);i++)
if(str[i]==' ')break;
for(j=0;j<i;j++)
printf("%c",str[j]);
}