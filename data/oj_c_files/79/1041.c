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
   int a=0;
   int b[20];int c[20];
    int l,i,j,k,e;
    for(e=0;;e++)
    {
        scanf("%d%d",&b[e],&c[e]);
    printf("\n");
    a++;
        if(b[e]==0||c[e]==0)
        break;
        }
  for(j=0;j<=a;j++)
  {
 
 
  if((0<b[j]&&b[j]<=300)&&(0<c[j]&&c[j]<=300)) 
 {  k=0;
    for(i=2;i<=b[j];i++)
    {k=((c[j]%i)+k)%i;}
     printf("%d\n",k+1);
             }
             } 
        
                       
                      getchar();
                       getchar();
      }
