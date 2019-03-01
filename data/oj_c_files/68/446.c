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
	int n,i,j,k,l,a;
		scanf("%d",&n);
		for(i=6;i<=n;i=i+2)
		{
			a=0;
		   for(k=2;k<=sqrt(i-3);k++)
			  if((i-3)%k==0) break;
			  if(k>sqrt(i-3)) printf("%d=3+%d\n",i,i-3);
			  else for(j=5;j<=i-5;j++)
			  { 
				  for(k=2;k<=sqrt(j);k++)
					  if(j%k==0) break;
					  if(k>sqrt(j)) 
			       {
					for(l=2;l<=sqrt(i-j);l++)
					 if((i-j)%l==0) break;
				     if(l>sqrt(i-j))
					 {
						 a++;
			            printf("%d=%d+%d\n",i,j,i-j);
					 }
					 
				}if(a==1) break;
		}
}
}