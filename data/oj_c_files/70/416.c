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

void main()
{  
  double max(double x[],int q);
  int n,i,j,k;
  double dot[100][2];
  double d[10000];
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
	  scanf("%lf %lf",&dot[i][0],&dot[i][1]);
  }
  k=0;
  for(i=0;i<n-1;i++)
  {
	  for(j=i+1;j<n;j++)
	  {
	  d[k]=sqrt((dot[i][0]-dot[j][0])*(dot[i][0]-dot[j][0])+(dot[i][1]-dot[j][1])*(dot[i][1]-dot[j][1]));
	  k=k+1;
	  }
  }
  printf("%.4f\n",max(d,k));
}
double max(double x[],int q)
{
	double bi=x[0];
	int i;
	for(i=1;i<q;i++)
	{
		if(x[i]>bi)
		bi=x[i];
	}
	return(bi);
}

	