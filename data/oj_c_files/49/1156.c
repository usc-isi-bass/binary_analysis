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
    char a[100000],b[1000];
    int l,i,j,t,p,q;
    scanf("%s",&a);
    l=strlen(a);
    for(i=1;i<l-1;i++)
    {
        for(j=0;j<l;j++)
        {
            t=j+i;
            p=j;
            do{
                    if(a[p]==a[t])
                     {
                           t=t-1;
                           p=p+1;
                     }
                     else
                     {
                         break;
                     }
            }while(t>p);
            if(t<=p)
            {
                for(q=j;q<(j+i);q++)
                {
                    printf("%c",a[q]);
                }
                 printf("%c\n",a[j+i]);
            }
        }
    }
    return 0;
}
