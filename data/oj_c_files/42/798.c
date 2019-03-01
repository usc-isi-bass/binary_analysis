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
 int a[100001],n,i,k,x,j,h;
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {scanf("%d",&a[i]);}
 scanf("%d",&k);
 x=n;
 i=1;
  while(i<=x)
        {
             //for(h=1;h<=n;h++)
                // {
                 if(a[i]==k)
                      {
                            for(j=i;j<=(x-1);j++)
                                a[j]=a[j+1];
                            x=x-1;
                            }
                 else i++;           
                // }
                
             }
  printf("%d",a[1]);
  for(i=2;i<=x;i++)
  {printf(" %d",a[i]);}  

}
