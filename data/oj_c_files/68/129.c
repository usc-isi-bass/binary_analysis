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

int main(int argc,char*argv[]) 
{ 
   int n,r,i,j,x,y,flag=0;
   scanf("%d",&n);
	   for(i=6;i<=n;i=i+2)
	   {
		   flag=0;
		   for(j=2;j<=i/2;j++)
		   {
			   int tag=0;
			   for(r=2;r<=sqrt(j);r++)
			   {
				   if(j%r==0)
				   { 
					   tag=1;
					   break;
				   }
			   }
			   if(tag==1)
				   continue;
				for(r=2;r<=sqrt(i-j);r++)
				{
				    if((i-j)%r==0)
					{
						 tag=1;
						break;
					}
				}
				if(tag==1)
				   continue;
                x=j;
				y=i-j;
				printf("%d=%d+%d\n",i,x,y);
				flag=1;
				break;

		   }if(flag==1)continue;
	   }
		   return 0;
}