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
    int sushu(int i);
    int a=0,b,c,n;
    scanf("%d",&n);
    int i=3;
    for (i;i<=n-2;i++)
    {
     if ((sushu(i)==0)&&(sushu(i+2)==0))
    { printf("%d %d\n",i,i+2);
    a++;}
                }
                if (0==a)
    printf("empty");
           }

int sushu(int i)
{int w=3;
for(w;w<=i;w++)
if(i%w==0) break;
if(w==i) return 0;
else return 1;}
