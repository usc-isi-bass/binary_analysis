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
		float a,b,c,d,e,S(float f,float g,float h,float i,float j),z;
		scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
		z=S(a,b,c,d,e);
		if(z>0)
		printf("%.4f",z);
		else
             printf("Invalid input");
	}
	float S(float f,float g,float h,float i,float j)
	{
		double sq,s;
        s = (f+g+h+i)/2;
		if(((s-f)*(s-g)*(s-h)*(s-i) - f*g*h*i*cos(j/720*2*PI)*cos(j/720*2*PI))>0)
			
		
		sq=sqrt((s-f)*(s-g)*(s-h)*(s-i) - f*g*h*i*cos(j/720*2*PI)*cos(j/720*2*PI));
		return(sq);
	}