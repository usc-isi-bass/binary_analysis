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
int n,i;
int a=0,b=0;
int x,y;

scanf("%d\n",&n);
for(i=0;i<n;i++)
{
                scanf("%d %d\n",&x,&y);
                if(x==y){a++;b++;}
                else
                if(x-y==-1||x-y==2)a++;
                else
                b++;
}

if(a==b)printf("Tie");
else
if(a>b)printf("A");
else
printf("B");


    
}