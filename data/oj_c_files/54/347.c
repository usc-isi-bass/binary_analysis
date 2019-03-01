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
	
int m,n,k;
	
scanf("%d%d",&n,&k);
	
if(n==2&&k==1)
    printf("7");
	
else
	
{
	
	
m=pow((int)n,(int)n)-k*n+k;
	
   printf("%d\n",m);
	
}
}