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
    char a[100];
    int b[100],i,s=0;
    gets(a);
    int x=0;
    for(i=0;a[i]!='\0';i++)
    {
                         b[i]=a[i]-'0';
                         s=10*s+b[i];
                         b[i]=s/13;
                         s=s-13*b[i];
                         if(b[i]!=0)
                         {
                                    printf ("%d",b[i]);
                                    x=1;
                         }
                         else
                         {
                             if(x==1)
                             printf ("%d",b[i]);
                         }
    }
    if(x==0)
    printf("0");
   printf("\n%d",s);

           
}

