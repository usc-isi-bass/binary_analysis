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
{int a,b,c,d,e;
for(a=0;a<5;a++)
{for(b=0;b<5;b++)
{for(c=0;c<5;c++)
{for(d=0;d<5;d++)
{for(e=0;e<5;e++)
{if((a!=b)&&(a!=c)&&(a!=d)&&(a!=e)&&(b!=c)&&(b!=d)&&(b!=e)&&(c!=d)&&(c!=e)&&(d!=e)&&((e!=1)&&(e!=2)))
if(((a<2)==(e==0))&&((b<2)==(b==1))&&((c<2)==(a==4))&&((d<2)==(c!=0))&&((e<2)==(d==0)))
{cout<<a+1<<" "<<b+1<<" "<<c+1<<" "<<d+1<<" "<<e+1;
}}}}}}
return 0;
}