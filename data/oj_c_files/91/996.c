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
char s1[101],s2[101];
int i=0;
gets(s1);
while(s1[++i]!='\0')
{s2[i-1]=s1[i]+s1[i-1];}
s2[i-1]=s1[0]+s1[i-1];
s2[i]='\0';
printf("%s",s2);
}
