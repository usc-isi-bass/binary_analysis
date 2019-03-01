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
      int m,n,i,j,k,l,sum,t;
       scanf("%d",&m);
       for (i=1;i<=m;i++)
       {
           scanf("%d",&n); 
           sum=60;t=0;          
       for (j=1;j<=n;j++)
       {
           scanf("%d",&l);
           if (sum>l)
           { 
           if (sum-l<3) sum=l;
            else sum=sum-3;
           }
           }   
       printf("%d\n",sum);
       }
    
       }
