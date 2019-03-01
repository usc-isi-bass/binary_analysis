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
int i,l;
char s[1000],s1[1000],c;
gets(s);
l=strlen(s);
*(s+l)=*s;
for(i=0;i<l;i++)
{*(s1+i)=*(s+i)+*(s+1+i);}
*(s1+l)='\0';
printf("%s",s1);
}

