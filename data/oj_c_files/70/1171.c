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
  double max=0;
  int n;
  double x[10000],y[10000];
  cin>>n;
  for(int i=0;i!=n;i++)
  {
	  cin>>x[i]>>y[i];
	  if(i>=1)
	  {
		  for(int j=0;j!=i;j++)
		  {
			  if(sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]))>max)
				  max=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
		  }
	  }
  }
  printf("%.4f\n", max);

  return 0;
}
