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
int a[10000];
int n,i,b;
scanf("%d",&n);
for(i=0;i<n;i++)
   {  int sum=0;
scanf("%d",&b);
    sum=fei(b);
    printf("%d\n",sum);
}
}

int fei(int n)
{
if(n==1)
   return 1;
 if(n==2)
   return 1;
 return (fei(n-1)+fei(n-2));

}