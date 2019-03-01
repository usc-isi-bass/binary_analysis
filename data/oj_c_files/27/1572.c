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


int main(int argc, char* argv[])
{
	int i,n;
	double a,b,c,p,q;
	double x1,x2,s;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%lf%lf%lf",&a,&b,&c);
	
	s=b*b-4*a*c;
	if(s>0){
		x1 = (-b + sqrt(s))/(2*a);
			x2 = (-b - sqrt(s))/(2*a);
			printf("x1=%.5f;x2=%.5f\n",x1,x2);
	}
	else if(s==0){
		x1=-b/(2*a);
		printf("x1=x2=%.5f\n",x1);
	}
	 else{ if(b!=0)
	 {double p=sqrt(-s)/(2*a),q=-b/(2*a);
      printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",q,p,q,p);
	}
	  else
	{double p=sqrt(-s)/(2*a),q=0.00000;
	  printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",q,p,q,p);
	}

	}
	}
	return 0;}
