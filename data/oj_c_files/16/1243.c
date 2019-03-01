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
int n,i,j,f,a,m;

scanf("%d",&n);
for(i=5;i>=1;i--)
{
f=pow(10,i);
a=n/f;
if(a!=0) break;
}
for(j=1;j<=i+1;j++)
{
m=n%10;



printf("%d",m);
n=(n-m)/10;

}
return 0;

}