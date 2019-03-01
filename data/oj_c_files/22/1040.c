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
{
char c;
int a[300],max=0,d=-1,i=0,b;
for(i=0;;i++)
{
scanf("%d%c",&a[i],&c);
if(c!=',') break;
}
b=i;i=1;
max=a[0];
for(i=1;i<=b;i++)
if(a[i]>max) {d=max;max=a[i];}
else if(a[i]<max&&a[i]>d)d=a[i];
if(d==-1) printf("No");
else printf("%d",d);
return 0;
}