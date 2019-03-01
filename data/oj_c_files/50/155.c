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
	int x,i,date,day;
	scanf("%d",&x);
	for(i=0;i<12;i++)
	{
        if (i==0) date=13;
		else if(i==4||i==6||i==9||i==11) date+=30;
		else if(i==2) date+=28;
		else date+=31;
		day=(date+x-1)%7;
		if (day==5) printf("%d\n",i+1);
	}
  return 0; 
} 


