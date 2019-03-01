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
int n;
scanf("%d",&n);
while (n!=1)
{
if (n%2==1)
printf("%d*3+1=%d\n",(n-1)/3,n=n*3+1);
else 
printf("%d/2=%d\n",n*2,n=n/2);
}
printf("End");
}
