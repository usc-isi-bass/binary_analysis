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
	int a[1000],b[1000],i=0,j=0,n=0,m=0;
	
	scanf("%d%d",&a[0],&b[0]);
		while(*(a+i)!=1)
		{
			if(*(a+i)%2==0)
			{	*(a+i+1)=*(a+i)/2;
			i=i+1;}
			else
			{
                 *(a+i+1)=(*(a+i)-1)/2;
				 i=i+1;
			}

		}
			while(*(b+j)!=1)
		{
			if(*(b+j)%2==0)
			{	*(b+j+1)=*(b+j)/2;
			j=j+1;}
			else
			{
                 *(b+j+1)=(*(b+j)-1)/2;
				 j=j+1;
			}

		}
			for(n=0;n<=i;n++)
			{
			while(m!=j+1)
				{
					if (*(b+m)!=*(a+n))
					{m=m+1;
					}
					else{
					goto loop;
					}
				}
			
				
				m=0;
			}
loop:printf("%d",*(b+m));
}
