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
{
int i,a,b,c,d,e,f,ans;
for (i=0;i<1000;i++)
{
scanf (" %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
if (a==0&&b==0&&c==0&&d==0&&e==0&&f==0){return 0;}
else if (c<=f&&b<=e) {ans=(12+d-a)*3600+(e-b)*60+(f-c)*1;}
else if (c>=f&&b<=e) {ans=(12+d-a)*3600+(e-b)*60+(f-c)*1;}
else if (c<=f&&b>=e) {ans=(12+d-a)*3600+(e-b)*60+(f-c)*1;}
else if (c>=f&&b>=e) {ans=(12+d-a)*3600+(e-b)*60+(f-c)*1;}
printf ("%d\n",ans);
}
return 0;
}