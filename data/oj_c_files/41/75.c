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
	int a,b,c,d,e,flag=0;
	for(e=4;e<=5;e++)
	{
       for(a=3;a<=5;a++)
	   {
		   for(c=1;c<=2;c++)
		   {
			   for(b=1;b<=2;b++)
			   {
				   for(d=3;d<=5;d++)
				   {
					   if(e=4&&d!=4&&d!=5&&a!=4&&b!=1
						   &&a!=d&&c!=2)
					   {
						   
						   flag=1;
					   break;
					   }
					   if(flag==1)
						   break;
				   }
				   					   if(flag==1)
						   break;
			   }
			   					   if(flag==1)
						   break;
		   }
		   					   if(flag==1)
						   break;
	   }
	   					   if(flag==1)
						   break;
	}
						   
	e=4;
	cout <<a<<" "<<b<<" " <<c<< " " <<d<<" " <<e<<endl;
    return 0;
}



