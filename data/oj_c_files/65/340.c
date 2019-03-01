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
    int a,b,i,n=0,m=0,l;
    scanf("%d\n",&l);
    for(i=0;i<l;i++)
    {
         scanf("%d %d\n",&a,&b);
         if((a-b==-1)||(a-b==2))
         {m++;}
         if((b-a==-1)||(b-a==2))
         {n++;}
    }
    if(m==n){printf("Tie");}
    if(m>n){printf("A");}
    if(m<n){printf("B");}
    }
