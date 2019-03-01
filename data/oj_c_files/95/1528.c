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

main()
{ char a[90],b[90];
 int i,g,h,min,t=0;
gets(a);
gets(b);
g=strlen(a);
h=strlen(b);
for(i=0;i<=g-1;i++)
{if(a[i]>='a'&&a[i]<=122) a[i]=a[i]-32;}

for(i=0;i<=g-1;i++)
{if(b[i]>=97&&b[i]<=122) b[i]=b[i]-32;}

t=strcmp(a,b);
if(t<0) printf("<");
if(t==0) printf("=");
if(t>0) printf(">");








return 0;
}
