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
{int a,b,c,d,e,f,g;
while(1)
{scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
if(a+b+c+d+e+f==0) return 0;
else printf("%d\n",(d+12-a)*3600+(e-b)*60+f-c);}}