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
int n,k,i,s,t;
scanf("%d%d",&n,&k);
t=1;
add:;
t=t+1;
s=n-2+t;
for(i=1;i<=n;i++)
{
if(s%(n-1))goto add;
s=s/(n-1)*n+k;
}
printf("%d",s);
return 0;
}

