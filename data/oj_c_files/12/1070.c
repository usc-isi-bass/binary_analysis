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
int a[16],sum=0,j,i,k,n=0;
while(1){
	for(i = 0;i < 16;i++)
	{
    scanf("%d",&a[i]);
    n = n + 1;
    if(a[i]==0)
	  {
       n = n-1;
       for(k = 0;k < (n - 1);k ++)
	      {
           for(j = k + 1;j < n;j ++)
			 {
              if((a[j] == a[k]*2) || (a[k]==a[j]*2))
			    {
                sum = sum + 1;
                }
               }
              }
          printf("%d\n",sum);
          i = 0;
          sum = 0;
          n = 0; 
		  break;
          }
		 else
		 {
         if(a[i]==-1)
			{
			return 0;
             }
           }
	     }
}
return 0;
}
