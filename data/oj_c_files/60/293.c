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
    int n,i,j,h,k;
    scanf("%d",&n);
    i=0;
    j=3;
    
    while(j<=n-2)
    {
                 k=0;
                 for(h=2;h<=j-1;h++)
                 {
                       if(j%h==0||(j+2)%h==0)
                       break;
                       if((j+2)%j==0||(j+2)%(j+1)==0)
                       break;
                       
                       k++;
                 }
                                  if(k==j-2)
                                  {printf("%d %d\n",j,j+2);
                                  i++;
                                  }
                                  j++;
       }
    if(i==0)
    printf("empty");
    
    
     getchar();
     getchar();
}
    