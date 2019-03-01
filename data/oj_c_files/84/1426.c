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
int a,b,c,d,e,i;
i=1;
scanf("%d\n",&a);
while(i<=a)
{
	scanf("%d",&b);
if(i==1)
{
c=b;
d=b;
}
	if(b>c)
{
e=c;
c=b;
if(e>d)
d=e;
}
else if(b>d)
d=b;
i=i+1;
}
printf("%d\n%d\n",c,d);

return 0;
}

