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
    int n,i,b;
    char a[50],*p,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
{
    scanf("%s",&a);
       b=strlen(a) ;
       p=&a[b-2];
       if((*p=='l')||(*p=='e'))
       {
            *p='\0';
            printf("%s\n",a);
       }
       else
       {
          p=&a[b-3];
          *p='\0';
        printf("%s\n",a);
       }
    }
     scanf("%s",&d);
     return 0;
}