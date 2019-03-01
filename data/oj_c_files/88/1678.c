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
{char s[32];
char *t=s;
int b;
gets(s);
for(;(*t)!='\0';t++)
{if((b=*t)>47&&(b=*t)<58)
{printf("%c",*t);
continue;}
else if((b=*(t-1))>47&&(b=*(t-1))<58)
{printf("\n");
continue;}
}
return 0;
}