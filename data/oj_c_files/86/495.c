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
    int n,i,j,m;
    int a[100],b[100];
    scanf("%d",&n);

    for(i=1;i<=n;i++)
{

       scanf("%d",&m);
       if(m==0)
      { printf("6");
       continue;}
      else

       for(j=0;j<m;j++)
       {
          scanf("%d",&a[j]);
       }
           for(j=m-1;j<m;j--)
           {
                if((60-a[j]-3*j)>0)
               {
	          break;
               }
            }

       if((60-a[j]-3*j)<4)
       {
          b[i-1]=a[j];
       }
       else
      {
            b[i-1]=57-3*j;
       }

}	
        for(i=1;i<=n;i++)
      {
         printf("%d\n",b[i-1]);
       }
return  0;
}