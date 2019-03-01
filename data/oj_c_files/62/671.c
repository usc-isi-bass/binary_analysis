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

int main ()
{char a[1000],b[1000];
int n,i=0,t;
n=0;
gets(a);
while (a[i]!='\0')
{if (a[i]!=32 && t!=0) t=0;
if (a[i]==32 && t!=0) t++;
else 
{b[n]=a[i];
n++;
if (a[i]==32) t++;
}
i++; 
}
b[n]='\0';
printf ("%s\n",b);
return 0;
}
