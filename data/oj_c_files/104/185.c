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

int main()
{
      int m,n,i,j,y,k;
      scanf("%d %d",&m,&n);
      if(m==n)
        printf("%d",m);
      else
         {
           if(m<n)
            {
             i=m;
             m=n;
             n=i;
             }
           y=m;
		   k=n;
            for(i=0;;i++)
                {
              l1:
{if(y==k)
break;	}		
                   y/=2;
                    if(y==k)
                    {
                       printf("%d",y);
                       break;
                    }
                    else
                     for(j=0;k>1;j++) 
                        {
                        k/=2;
                          if(y==k)
						  {printf("%d",y);
						  goto l1;}
		       }			    
                      if(k==1)
                          k=n;
                       
                }
}
}
