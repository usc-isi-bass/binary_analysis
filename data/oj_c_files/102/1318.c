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

struct photo
{
       char gen[10];
       double height;
};
main()
{
      int n;
      scanf("%d",&n);
      struct photo a[50];
      struct photo b;
      int i,j,k=0;
      for(i=0;i<n;i++)
      scanf("%s %lf",a[i].gen,&a[i].height);
      for(i=0;i<n;i++)
      {
            for(j=0;j<n-1-i;j++)
            {
                if(a[j].height<a[j+1].height)
                {
                    b=a[j];
                    a[j]=a[j+1];
                    a[j+1]=b;
                }
            }
      }
      for(i=n-1;i>=0;i--)
      {
             if(strcmp(a[i].gen,"male")==0&&k!=0)
             printf(" %.2f",a[i].height);
             if(strcmp(a[i].gen,"male")==0&&k==0)
             {
                printf("%.2f",a[i].height);
                k=k+1;
             }
      }
      for(i=0;i<n;i++)
      {
             if(strcmp(a[i].gen,"female")==0)
             printf(" %.2f",a[i].height);
      }
      }
                    
             
          
      
       
