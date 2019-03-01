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

int day(int mouth)
{
	int i;
	if(mouth==1 || mouth==3 || mouth==5 || mouth==7 || mouth==8 || mouth==10)
		i=31;
	else if(mouth==2)
		i=28;
	else if(mouth==0) i=0;
	else i=30;
	return(i);
}

int main()
{
	int i, w, date=0;
	scanf("%d", &w);
	w=13%7+w-1;
	if(w>7) w=w-7;
	for(i=0;i<12;i++)
	{
       w=day(i)%7+w;
       if(w>7) w=w-7;
	   if(w==5) 
		  printf("%d\n", i+1);
	}
	return 0;
}