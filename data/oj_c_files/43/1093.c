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
	int m,a=2,b,i=2,j=2;
    scanf("%d",&m);
	while(a<=m/2)
	{
		int i=2,j=2;
		while(i<a)
		{
		  if(a%i!=0)
		  i++;
		  else
		  goto loop1;
        }
	  b=m-a;
	  while(j<b)
 		{
		  if(b%j!=0)
		  j++;
		  
		  else
		  break;

		  if(j==b)
          {
          printf("%d %d\n",a,b);
		  break;
          }
        }
		loop1:a++;
    }

}