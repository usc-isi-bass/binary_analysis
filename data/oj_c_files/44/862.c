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
    int i,j[6],k[6];
    int reverse(int n);
    for(i=0;i<6;i++)
    {   scanf("%d",&j[i]);
        k[i]=reverse(j[i]);
        }
    for(i=0;i<6;i++)
        printf("%d\n",k[i]);


    }
    
     int reverse(int n)
     {      int N,i,j=0,revn=0;
            N=n;
            if(n<0)
            n=-n;
            for(;n!=0;)
            {   j=n%10;
                revn=revn*10+j;
                n=n/10;
                        }
            if(N<0)
            revn=-revn;
            return(revn);
            
            
       



            }
