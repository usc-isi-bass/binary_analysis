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
   int n,a[100],b[100],i,x,y;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
               scanf("%d %d",&a[i],&b[i]);
               }
               x=0,y=0;
               for(i=0;i<n;i++)
               {
               if(a[i]==0&&b[i]==1) 
               x++;
               else if(a[i]==0&&b[i]==2) 
               y++;
               else if(a[i]==1&&b[i]==0) 
               y++;
               else if(a[i]==1&&b[i]==2) 
               x++;
               else if(a[i]==2&&b[i]==0) 
               x++;
               else if(a[i]==2&&b[i]==1) 
               y++;
               }
               if(x==y) printf("Tie\n");
               if(x<y) printf("B\n");
               if(x>y) printf("A\n");
                           }