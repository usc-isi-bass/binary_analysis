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
	int i,k,s,a,n,b,c;
	
	int count=0;
	scanf("%d",&s);
	for(i=6;i<=s;i++)
	{
		if(i%2==0)
		{
			a=i;
		for(n=2;n<=a/2;n++)
		  {
             c=(int)(sqrt(n));
			    for(k=2;k<=c;k++)
				{
				  if(n%k==0)
					 break; 
				}
				if(k>c){
					  b=a-n;							    				  			  
              			      for(k=2;k<=(sqrt(b));k++)
				  {
				  if(b%k==0)
					  break;
				  }
				  if(k>((int)(sqrt(b)))){
                   printf("%d=%d+%d\n",a,n,b);
					  break;
				  }
				} 				  				
		  }
		}
	}	 	
	return 0;
}
 