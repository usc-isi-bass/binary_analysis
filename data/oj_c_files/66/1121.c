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



int week (int y,int m,int d) 
{ 
 int w; 
 if((m==1)||(m==2)) 
 { 
  y--; 
  m+=12; 
 } 
 w=(d+2*m+3*(m+1)/5+y+y/4-y/100+y/400+1)%7; 
 return (w); 
}

int main()
{
	int y,m,d;
	char month[7][5]={"Sun.","Mon.","Tue.","Wed.","Thu.","Fri.","Sat."};
	scanf("%d%d%d",&y,&m,&d);
	printf("%s",month[week(y,m,d)]);
	return 0;
}
