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
    int w,day,mon;
	int cal(int mon);
	scanf("%d",&w);
	for(mon=1;mon<13;mon++)
	{
	    day=cal(mon);
		if((day+w)%7==5)printf("%d\n",mon);
	}
}
int cal(int mon)
{
   int total=0;
   if(mon>1)total+=31;
   if(mon>2)total+=28;
   if(mon>3)total+=31;
   if(mon>4)total+=30;
   if(mon>5)total+=31;
   if(mon>6)total+=30;
   if(mon>7)total+=31;
   if(mon>8)total+=31;
   if(mon>9)total+=30;
   if(mon>10)total+=31;
   if(mon>11)total+=30;
   total=total+12;
   return(total);
}