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
	int a,b,c,m,n;
	scanf("%d%d%d",&a,&b,&c);
	if(a%400==0||a%4==0 && a%100!=0)
	{
		m=29;
	  if(b==1)
		  n=c;
	  else if(b==2)
		  n=31+c;
	  else if(b==3)
		  n=31+m+c;
	  else if(b==4)
		  n=31+m+31+c;
	  else if(b==5)
		  n=31+m+31+30+c;
	  else if(b==6)
		  n=31+m+31+30+31+c;
	  else if(b==7)
		  n=31+m+31+30+31+30+c;
	  else if(b==8)
		  n=31+m+31+30+31+30+31+c;
	  else if(b==9)
		  n=31+m+31+30+31+30+31+31+c;
      else if(b==10)
		  n=31+m+31+30+31+30+31+31+30+c;
	  else if(b==11)
		  n=31+m+31+30+31+30+31+31+30+31+c;
	  else
		  n=31+m+31+30+31+30+31+31+30+31+30+c;
	}
	else
	{
		m=28;
      if(b==1)
		  n=c;
	  else if(b==2)
		  n=31+c;
	  else if(b==3)
		  n=31+m+c;
	  else if(b==4)
		  n=31+m+31+c;
	  else if(b==5)
		  n=31+m+31+30+c;
	  else if(b==6)
		  n=31+m+31+30+31+c;
	  else if(b==7)
		  n=31+m+31+30+31+30+c;
	  else if(b==8)
		  n=31+m+31+30+31+30+31+c;
	  else if(b==9)
		  n=31+m+31+30+31+30+31+31+c;
      else if(b==10)
		  n=31+m+31+30+31+30+31+31+30+c;
	  else if(b==11)
		  n=31+m+31+30+31+30+31+31+30+31+c;
	  else
		  n=31+m+31+30+31+30+31+31+30+31+30+c;
	}
	printf("%d",n);
	return 0;
}
