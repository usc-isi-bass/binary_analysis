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

int main(void)
{
int i,n;
scanf("%d\n",&n);
int num[n];
for(i=0;i<n;i++)
scanf("%d",&num[i]);
for(i=1;i<n;i++)
printf("%d ",num[n-i]);
printf("%d",num[0]);
return 0;
}
