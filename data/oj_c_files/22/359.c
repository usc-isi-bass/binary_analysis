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
	char c;
	int i=0,j,s=0,a,m[300],max1,max2;
	while((c=getchar())!='\n')
	{
		if(c==',')
		{
			m[i]=s;
			i++;
			s=0;	
		}	
		else 
		{
			a=c-'0';
			s=s*10+a;	
		}
		
	} 
	m[i]=s;
	if(i==1) printf("No");
		else
		{
			max1=m[0];max2=-1;
			for(j=1;j<=i;j++)
			{
				if(m[j]>max1) {max2=max1;max1=m[j];}
				else if(m[j]==max1) continue;
				else if(m[j]>max2) max2=m[j];	
				//printf("%d,%d",max1,max2);printf("\n\n");
			}	
		
    	if(max1==max2||max2==-1) printf("No");
    	else printf("%d",max2);
		}
}