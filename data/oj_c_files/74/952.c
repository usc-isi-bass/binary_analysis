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
	int i,j,m,n,k=0;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{    

		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
             break;
		}
		if(j>=i/2)
		{   int a,b,c;
		    a=i;
			b=0;
		    while(a>0)
			{
				c=a%10;
				b=b*10+c;
				a=a/10;
			}
         if(i==b)
		 {     
			 if(k==0)
			 {           
			   printf("%d",i);
			   k++;
			 } 
		       else
			   {
				   printf(",%d",i);
				   k++;
			   }
		 }
		} 
	}
	      if(k==0)   
			  printf("no\n");
}
