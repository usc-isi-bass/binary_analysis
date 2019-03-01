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


int main(int argc, char* argv[])
{
    int a[100],b[100];
	int i=1,j=1,x,y,count=0,judge=0;
	scanf("%d%d",&x,&y);
	while(x!=0)
	{ 
		a[i]=x;
		x=x/2;
		i++;
	}
	while(y!=0)
	{
		b[j]=y;
		y=y/2;
        j++;
		count++;
	}
    for(i=1;i<100;i++)
	{
		for(j=1;j<=count;j++)
		{
			if(a[i]==b[j])
			{
				printf("%d\n",a[i]);
				judge=1;

				break;
			}
		}
		if(judge==1)
		{break;}


    }
	
	return 0;
}
