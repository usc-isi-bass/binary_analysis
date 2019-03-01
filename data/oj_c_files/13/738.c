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
 int n,a[20000],j,temp;
 scanf("%d",&n);
 for(int i=1;i<=n;i++)
            {
             scanf("%d",&temp);
             if(i==1)
                       {
                        j=0;
                        printf("%d",temp);
                        a[j]=temp;
                       }
             else
                 {
                  int c=0;
                  for(int k=0;k<=j;k++)
                          {
                           if(a[k]==temp)
                           c++;            
                          }
                  if(c==0)
                           {        
                            printf(" %d",temp);
                            j++;
                            a[j]=temp;     
                           }             
                 }         
            }
 getchar();
 getchar();
}