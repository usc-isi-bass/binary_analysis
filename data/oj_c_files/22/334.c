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
{int a[300];
char b;
int i,j,max,second,kai,min;
for(i=1;i<=300;i++)
{      
       scanf("%d%c",&a[i-1],&b);
       if(b=='\n')
       break;
}
max=a[0];min=a[0];
for(j=0;j<=i-1;j++)
{
                   if(a[j]>=max)
                   max=a[j];
                   if(a[j]<min)
                   min=a[j];
}


second=max;
for(j=0,kai=0;j<=i-1;j++)
{
                   if(a[j]<max&&a[j]>=min)
                   {second=a[j];
                   min=second;
                   kai=1;
                  }
                  
                  
}               
    
if(kai==0||i==1)
printf("No");
else
printf("%d",second);
      
             
                    

  
    return 0;
}
