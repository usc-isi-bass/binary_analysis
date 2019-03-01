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
{int m,a,i,k;
scanf("%d",&m);
for(a=3;a<=m/2;a+=2)
{k=0;{for(i=1;i<=m/2;i+=2)
if(a%i==0||(m-a)%i==0) k++;}
if(k==2) printf("%d %d\n",a,m-a);}
return 0;}