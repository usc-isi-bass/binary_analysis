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
int i,*p,len;
char s[101]={'\0'};
gets(s);
len=strlen(s);
p=&s[0];
for(i=0;i<len-1;i++)
printf("%c",*(s+i)+*(s+i+1));
printf("%c",*s+*(s+len-1));
}
