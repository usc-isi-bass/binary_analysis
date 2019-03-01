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
char str[1000],i,m=1,n;
scanf ("%s",str);
for (i=0;i<=100;i++)
{
if (str[i]<='z' && str[i]>='a')
str[i]=str[i]+'A'-'a';
}
i=0;
for (i=0;i<=999;i++)
{
    if (str[i]=='\0')
    {n=i-1;break;}
}
for (i=0;i<=n;i++)
{
    if (str[i]==str[i+1])
    {m=m+1;}
    else
    {printf ("(%c,%d)",str[i],m);m=1;continue;}

}
return 0;
}