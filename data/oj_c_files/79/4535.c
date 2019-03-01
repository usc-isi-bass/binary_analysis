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
	int n[300],m,i,j,k,r;
    while(1)
	{
       scanf("%d%d",&r,&m);
	   j=r;
	   if(r==0&&m==0)
		   break;
	   else
	   {
	   for(i=0;i<r;i++)
		   n[i]=i+1;
	   i=0;
	   while(j>1)
	   {
		   for(k=1;k<m;k++)
		   {
					while(n[i]==0)
					{
					if(i<r-1)
					i=i+1;
					else i=0;
					}
                    if(i<r-1)
					i=i+1;
					else i=0;
			}
				while(n[i]==0)
					{
					if(i<r-1)
					i=i+1;
					else i=0;
					}	  
					n[i]=0;
					j=j-1;
		}
	   
		   for(i=0;i<r;i++)
		   {
				if(n[i]!=0)
					printf("%d",n[i]);
		   }
		   printf("\n");
	   
	   }
	   }
}
    