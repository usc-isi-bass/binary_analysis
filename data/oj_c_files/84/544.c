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
int a,b,c,d,e,n;
scanf("%d\n%d\n%d\n",&n,&a,&b);
if(a<b) {
c=a;
a=b;
b=c;

}
n=n-2;
for(e=1;e<=n;e++)
{
scanf("%d",&d);
if(a<d) {
	b=a;
  a=d;

}
else if(b<d) b=d;

}
printf("%d\n%d",a,b);


}