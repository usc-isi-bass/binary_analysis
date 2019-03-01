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
int count=0;
int a,b,c,n;
int i=1;
scanf("%d",&n);
b=0;
c=0;
while(i<=n)
{
	i++;
    scanf("%d",&a);
	if(a>=b)c=b,b=a;
    if(a>c&&a<b)c=a;
}
printf("%d\n",b);
printf("%d\n",c);
return 0;
}