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
	int a,b,c,d,e,f,g,x,h,i,j,k,l,m,n,s;
	scanf("%d",&x);
	a=3;
	b=5;
	c=7;
	d=a*b*c;
	e=a*b;
	f=a*c;
	g=b*c;
	h=x%d;
	i=x%e;
	j=x%f;
	k=x%g;
	l=x%a;
	m=x%b;
	n=x%c;
	s=l*m*n;
	if(h==0)	printf("%d %d %d",a,b,c);
	else if(i==0)	printf("%d %d",a,b);
		 else if(j==0)	printf("%d %d",a,c);
              else if(k==0)	printf("%d %d",b,c);  
			       else if(l==0)	printf("%d",a);  
				   else if(m==0)	printf("%d",b); 
				   else if(n==0)	printf("%d",c);  
			       
			       else

	printf("n");

}