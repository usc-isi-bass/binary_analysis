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

void main()
{
int a,ss=0,i;
scanf("%d",&a);
for(i=1;i<=a;i++)
   {if(i%7==0) ss=ss;
    else if(i>=70&&i<80) ss=ss;
	else if(i%10==7) ss=ss;
	else ss=ss+i*i;
	}
printf("%d\n",ss);
}
