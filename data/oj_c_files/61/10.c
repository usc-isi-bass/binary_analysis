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
int f(int j);
int n,i,j;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&j);
printf("%d\n",f(j));

}

}
int f(int j)
{
int x=0;
if(j==1||j==2)x=1;
else x=f(j-1)+f(j-2);
return x;


}