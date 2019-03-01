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
	int k,y,h[25],g[25];
	scanf("%d",&k);
	for(int i=0;i<k;i++)
	{
            scanf("%d",&h[i]);
    }
     for(int a=0;a<k;a++)
     g[a]=1;
    for(int j=k-2;j>=0;j--)
    {
            y=0;
            for(int i=j+1;i<k;i++)
            { 
                    	if(h[i]<=h[j])
		              	{
			            	if(y<g[i])
			            	y=g[i];
		            	}
            }
            g[j]=g[j]+y;
    }
    int d=g[0];
    for(int i=0;i<k-1;i++)
    {
            if(d<g[i])
            d=g[i];
    }
    printf("%d",d);
    getchar();
    getchar();
     getchar();
    getchar();
}
