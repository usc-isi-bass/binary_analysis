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
	int m, n,a,i,j,temp,x,y;
	scanf("%d",&m);
	scanf("%d",&n);
	for(j=0;m<=n;m++)
	{
		if(m==1)
			continue;
		for(i=2;i<m;i++)
		{
			a=m%i;
	        if(a==0)
				break;
		}                   //???????
	    if(a!=0)            // printf("%d\n",m);
		{
			temp=m;
			y=0;
			while(temp>0)
			{	
				x=temp%10;
				y=y*10+x;
				temp=temp/10;
			}
			if(m==y)          //?????
			{   
				j=j+1;        //??m????????
				if(j==1)
					printf("%d",m);
			    else
					printf(",%d",m);
			}
		}
	}
	if(j==0)
		printf("no");
}