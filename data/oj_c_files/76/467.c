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
   int n,a[5001],b[5001],i,j,m;
   m=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d%d",&(a[i]),&(b[i]));
   }

   for(i=1;i<n;i++)   
   /*************************************************************************************
   attention?????????????i???1????????????i=0?????????
   j?????n-1, ???a[j+1] = a[n]?a[n]?????????i<n????i<=n
   **************************************************************************************/
   {
         for(j=0;j<n-i;j++)
         {
                if(a[j]>a[j+1])
                {
                         int e;
                         e=a[j];
                         a[j]=a[j+1];
                         a[j+1]=e;
                         e=b[j];
                         b[j]=b[j+1];
                         b[j+1]=e;
                }
         }
   }

  for(i=1;i<n;i++) 
  //??????i???1???????0??????
  {
	  for( j = 0; j < i; j++ )  //????i??????????????i??????a[i]?
	  {
             if(b[j] >= a[i])  //???????">="????">"
                 break;
	  }
	  if( j == i )   
	  //if(j==i)?????????????????????????a[i]??a[i]??????
	  {
		  break;  
		  //???????m??????????????????????????break?????
		  //???????????????????????????????????????
	  }
  }

  if( i == n )  //if( i==n )???????????????????????????????????????
  {
	  int max = b[0]; //?????????b[n-1]???b[n-1]?????????
	  for( j = 1; j < n; j++ )
	  {
         if( b[j] > max )
			 max = b[j];
	  }
      printf("%d %d",a[0],max);
  }
  else
  {
          printf("no");
  }
  return 0;
}