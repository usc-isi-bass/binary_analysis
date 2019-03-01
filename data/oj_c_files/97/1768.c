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
int n,a,b,c,d,e,f;
scanf("%d",&n);
a=(n-n%100)/100;
b=((n%100)-(n%100)%50)/50;
c=(((n%100)%50)-((n%100)%50)%20)/20;
d=(((n%100)%50)%20-(((n%100)%50)%20)%10)/10;
e=((((n%100)%50)%20)%10-((((n%100)%50)%20)%10)%5)/5;
f=n%5;
printf("%d\n%d\n%d\n%d\n%d\n%d",a,b,c,d,e,f);

return 0;
}