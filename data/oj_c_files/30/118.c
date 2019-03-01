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
	int i,n,s=0;
	scanf("%d",&n);
for(i=0;i<=n;i++)
{
s=s+i*i;

if(i%7==0||i%10==7||i>69&&i<80)
s=s-i*i;
}
printf("%d",s);
return 0;
}