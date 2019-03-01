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
	int n,i=0,j=0,a,b,k=0;
	scanf("%d",&n);
		while(i<n)
		{   i++;
			scanf("%d %d",&a,&b);
			if(90<=a&&a<=140&&60<=b&&b<=90)
			{
				j++;
			}
			else
			{
				break;
			}
	     }
		while(i<n)
		{
	         while(i<n)
             {    i++;
			      scanf("%d %d",&a,&b);
			      if((90<=a)&&(a<=140)&&(60<=b)&&(b<=90))
			        {
				     k++;
			        }
			      else
			        {
				      break;
			        }
	         }
             if(k>j)
				      {
						  j=k;
					  }
				      k=0;
		}
printf("%d",j);
	return 0;
}