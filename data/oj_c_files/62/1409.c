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
{int i,n;
char *p;
p=(char*)malloc(100000*sizeof(char));
gets(p);
n=strlen(p);
for(i=0;i<n;i++,p++)
{if(*p!=' ')
{printf("%c",*p);}    /*???????????*/
if(*p==' ')            /*????????????????????????*/ 
{printf("%c",*p);
while(*p==' ')
{i++;p++;}
i=i-1;p=p-1;}
}
}