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
    int n;
    scanf("%d",&n);
    int m=0;
    int nn=n;
    for(int i=1;i<5;i++)
    {
       n=n/10;
       if(n==0) 
       {
         m=i;
         break;
       }     
    }
    int a;
    for(int i=0;i<m;i++)
    {
       a=nn%10;
       printf("%d",a);   
       nn=nn/10;       
    }
    getchar();
    getchar();
}
