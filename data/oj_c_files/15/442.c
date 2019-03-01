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
	int n,h,z;
	int a[100][100];
    int x;
	int a1,b1,a2,b2;
    int br=1;
    int s;

    scanf("%d",&n);

	for(z=1;z<=n;z++)
	{
		for(h=1;h<=n;h++)
		{
			scanf("%d",&a[h][z]);
			
		}
	}
	
	
	
	for(z=1;z<=n;z++)
	{
		for(h=1;h<=n;h++)
		{
			if(a[h][z]==0)
			{ 
			   a1=h;
               b1=z;
			   br=0;
			   break;
			}
			
		}
		if(br==0)break;
	}
	
	
	for(z=1;z<=n;z++)
	{
		for(h=1;h<=n;h++)
		{
			if(a[h][z]==0&&a[h-1][z]==0&&a[h][z-1]==0)
			{ 
			   a2=h;
	           b2=z;
			  
			}
			
		}
		
	}
	
	
	s=(a2-a1-1)*(b2-b1-1);
	printf("%d\n",s);
	return 0;
}