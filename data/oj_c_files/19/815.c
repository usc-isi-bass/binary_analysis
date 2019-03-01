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
{char *a,*b,*s,*p,*t;
s=(char *)malloc(100*sizeof(char));
a=(char *)malloc(100*sizeof(char));
b=(char *)malloc(100*sizeof(char));
gets(s);
gets(a);
gets(b);
for(;;s++)
{p=a;
 t=s;
while(*s==*p&&*s!=' '&&*s!='\0')
{p++;
s++;}
if(*s==' '&&*p=='\0')
{printf("%s",b);
printf(" ");
continue;
}
else if(*s=='\0'&&*p=='\0')
{printf("%s",b);
break;
}
while(*s!=' '&&*s!='\0')
s++;
if(*s==' ')
{for(;*t!=' ';t++)
printf("%c",*t);
printf(" ");
}
if(*s=='\0')
{for(;*t!='\0';t++)
printf("%c",*t);
break;
}
}


}












