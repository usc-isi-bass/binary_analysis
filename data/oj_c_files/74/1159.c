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

int sushu(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
       if(n%i==0)
        break;
    }
    if(i==n)
     return 1;
    else
     return 0;
}
int huiwenshu(int m)
{
    int d,m1;
     m1=m;
      for(d=0;m!=0;)
      {
           d=d*10+m%10;
           m=m/10;
      }
      if(m1==d)
       return 1;
      else
       return 0;
}
main()
{
     int m,n,i,count=0;
     scanf("%d %d",&m,&n);
     for(i=m;i<=n;i++)
     {
          if(huiwenshu(i)==1)
          {
                if(sushu(i)==1)
                {
                  if(count==0)
                  {             
                    printf("%d",i);
                    count++;
                  }  
                  else
                   printf(",%d",i);
                }
          }
     }
     if(count==0)
       printf("no");
     getchar();
     getchar();
}                                                                 
        
