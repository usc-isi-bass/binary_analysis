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

  int n,i,k=0;
  scanf("%d",&n);
  float x,nu[300];
  float d=0;
  float z=0;
  float nn[300];
  for(i=0;i<n;i++)
  {
  scanf("%f",&nu[i]);
  z=z+nu[i];
  
  }
  x=z/(float)n;
  for(i=0;i<n;i++)
  {
    if(x-nu[i]>d)
	{	d=x-nu[i];}
	if(nu[i]-x>d)
	{	d=nu[i]-x;}
  }
  for(i=0;i<n;i++)
  {
      if(x-nu[i]-d<=0.01&&x-nu[i]-d>=-0.01)
	  {
		  nn[k]=nu[i];
	      k++;
	  }
	  else
		  if(nu[i]-x-d<=0.01&&nu[i]-x-d>=-0.01)
		  { nn[k]=nu[i];
	      k++;}
  
  
  }
  printf("%.0f",nn[0]);
  for(i=1;i<k;i++)
  {
  printf(",%.0f",nn[i]);
  }


  return 0;
}