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
int m1,m2,n;
char c;
m1=m2=0;
do
{
scanf("%d%c",&n,&c);
if (n>m1)
{
m2=m1;
m1=n;
}
else if((n>m2)&&(n!=m1))
m2=n;
}
while(c==',');
if((m2!=m1)&&(m2!=0))
printf("%d",m2);
else
printf("No");

return 0;
}
