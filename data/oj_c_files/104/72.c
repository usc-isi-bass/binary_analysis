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
{int a,b,c=0,d=0;scanf("%d%d",&a,&b);
if(a==b)printf("%d",a);
else{
for(;a;)c=(c<<1)|(a&1),a>>=1;
for(;b;)d=(d<<1)|(b&1),b>>=1;
a=c^d,c=0;
for(;(a&1)==0;)c=(c<<1)|(d&1),a>>=1,d>>=1;
printf("%d",c);}}