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
    char a[6]={'0','0','0','0','0','0'};
    int z,q,s,l,i;

    for(z=1;z<6;z++)
    {
        for(q=1;q<6;q++)
        {
            for(s=1;s<6;s++)
            {
                for(l=1;l<6;l++)
                {
                    if((z+q==s+l)&&(z+l>s+q)&&(z+s<q))
                    {
                         a[z]='z';
                         a[q]='q';
                         a[s]='s';
                         a[l]='l';
                         for(i=5;i>0;i--)
                         {
                             if(a[i]!='0')
                             {
                                 printf("%c %d0\n",a[i],i);
                             }
                         }
                    }
                }
            }
        }
    }
}