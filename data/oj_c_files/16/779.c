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
 int i=1,n,m,p;
 scanf("%d",&n);
 if(n==10000)printf("00001");
 else if(n<=9) m=1;
 else if(n<100) m=2;
 else if(n<1000) m=3;
 else if(n<10000) m=4;
 while(i<=m)
 {
    p=n-n/10*10;
    printf("%d",p);
    n=n/10;
    i++;
 }
 return 0;
 }
