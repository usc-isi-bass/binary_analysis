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
{
int a,b,c,d,e,f,t;
scanf("%d",&a);
b=a/10000;
c=(a-10000*b)/1000;
d=(a-10000*b-1000*c)/100;
e=(a-10000*b-1000*c-100*d)/10;
f=(a-10000*b-1000*c-100*d-10*e);
if(b!=0)
{
t=f;
f=b;
b=t;
t=e;
e=c;
c=t;
printf("%d%d%d%d%d",b,c,d,e,f);
}
else if(c!=0)
{t=f;
f=c;
c=t;
t=e;
e=d;
d=t;
printf("%d%d%d%d",c,d,e,f);
}
else if(d!=0)
{t=f;
f=d;
d=t;
printf("%d%d%d",d,e,f);
}
else if(e!=0)
{
t=f;
f=e;
e=t;
printf("%d%d",e,f);
}
else
printf("%d",f);

return 0;
}

