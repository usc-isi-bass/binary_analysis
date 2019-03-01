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
 int n,p,q,a,b;
 float r,s;
 scanf("%d %d %d",&n,&p,&q);
 r=(float)q/(float)p;
 for(int i=1;i<=n-1;i++)
            {
             scanf("%d %d",&a,&b);
             s=(float)b/(float)a;
             if(r>s+0.05)
                       printf("worse\n");
             else if(s>r+0.05)
                       printf("better\n");
             else printf("same\n");           
            } 
 getchar();
 getchar();
 getchar();    
}