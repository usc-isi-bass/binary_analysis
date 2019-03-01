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
  int n,i;
  double a[1000];
  double b[1000];
  scanf("%d",&n);

  for(i=0; i<n; i++)
	  scanf("%lf %lf",&a[i],&b[i]);
  for(i=1; i<n; i++)
  {
    if(b[i]/a[i]-b[0]/a[0]>0.05)
		printf("better\n");
	else if(b[0]/a[0]-b[i]/a[i]>0.05)
		
			printf("worse\n");
		else
			printf("same\n");
  }

  
 
  
  return 0;
}