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
{int n,i,j;
 scanf("%d",&n);
 struct a{double x,y;}*p;
 p=(struct a*)malloc(sizeof(struct a)*n);
      for(i=0;i<n;i++)
	  { scanf("%lf%lf",&(p+i)->x,&(p+i)->y);
	  }
 double dis=0;
      for(i=0;i<n;i++)
	  { 
		  for(j=0;j<n;j++){
		  double t;
		  t=sqrt(pow(((p+i)->x-(p+j)->x),2)+pow(((p+i)->y-(p+j)->y),2));
		  if(t>dis)
			  dis=t;
		  }
	  
	  }
	  printf("%.4f",dis);
  return 0;
}
