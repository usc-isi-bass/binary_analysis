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

main()
{
	int a[52][7];
	int i,j,t;
	int w;
	scanf("%d",&w);
	t=9-w;
	for(i=1;i<52;i++)
	{
		for(j=0;j<7;j++)
		{
			a[i][j]=t;
            t++;
        }
	}
	int x,y;
	for(i=1;i<52;i++)
	{
		for(j=0;j<7;j++)
		{
			x=a[i][j];
	        if((x==13)||(x==44)||(x==72)||(x==103)||(x==133)||(x==164)||(x==194)||(x==225)||(x==256)||(x==286)||(x==317)||(x==347))
			{
	        	if(j==4)
	        	{
	        		y=x/30+1;
	        		printf("%d\n",y);
	        	}
	        }
	  }}}