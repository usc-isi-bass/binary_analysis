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
	int a,b,c,i=1,n,x=0;

	
	
    int f[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};   
	int isleapyear(int a);
	while(x<=4)
	{
	    scanf("%d %d %d",&a,&b,&c);
		n=0;
		

	
	    for(i=1;i<b;i++)
		{
			

			n+=f[i];
		}
		
		   
		
	     n+=c;
	   if(b>2&&isleapyear(a))
		    n+=1;
	        
	    printf("%d\n",n);
		x++;
    }
	
}
int isleapyear(int a)
	{
		return((a%4==0&&a%100!=0)||(a%400==0));
		
	}