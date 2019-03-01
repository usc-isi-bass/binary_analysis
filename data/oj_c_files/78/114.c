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

// ???.cpp : ??????????????
//



int main()
{
	int i,z,s;
	for(i=70;i>=30;i-=10)
	{
	   for(z=20;z<=30;z+=10)
	   {
	     for(s=10;s<z&&s<=20;s+=10)
		 {
		   if(z*2+s<i&&i-s<60)
		   {
printf("l %d\n",i-s);
printf("q %d\n",i-z);		    
printf("z %d\n",z);
printf("s %d\n",s);	 

			 			
 
		   }
		 }
	   }
	}
	return 0;
}