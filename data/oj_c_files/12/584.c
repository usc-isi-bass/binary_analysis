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
int i, NO, tmp, a[101];
while(1)
{
scanf("%d",&tmp);
if(tmp == -1) break;
NO = 0;
for(i = 0; i < 101; i++)
a[i] = 0;
a[tmp] = 1;
while(scanf("%d",&tmp)==1&&tmp)
a[tmp] = 1;
for(i = 0; i < 50; i++)
if(a[i]&&a[2*i])
NO++;
printf("%d\n",NO);
}
return 0;
}