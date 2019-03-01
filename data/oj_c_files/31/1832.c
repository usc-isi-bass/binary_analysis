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
char s[1024][128];
int i=0;

while(gets(s[i]))
{
if(strcmp(s[i],"end")==0) break;
i++;
}

while(i!=0)
{
i--;
puts(s[i]);
}
}