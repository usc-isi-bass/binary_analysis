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
    char a[50],b[50];
    scanf("%s %s",a,b);
    int l1,l2,i,t=1,j,m,y;
    l1=strlen(a);
    l2=strlen(b);
	
    for(i=0;i<l2;i++)
    {
       if(b[i]==a[0])
       {
           m=i;
		  
           for(j=1,y=m;j<l1;j++,y++)
           {
               if(b[y+1]==a[j])
               {
                   t++;
                }
                              if(t==l1)
               {
                   printf("%d",m);
                   break;
                }
            }
        }
     }
return 0;
}
