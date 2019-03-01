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
	int x, y, x_[100], y_[100], i=0, j=0, count_x=0, count_y=0;
	scanf("%d%d", &x, &y);
	if(x == y)
		printf("%d\n", x);
	else
	{	
		x_[0] = x; 	
		y_[0] = y;	
		for(i=0; x_[i]>0; i++)	
		{		
			x_[i+1]=x_[i]/2;	
			count_x++;	
		}	
		for(i=0; y_[i]>0; i++)	
		{	
			y_[i+1]=y_[i]/2;	
			count_y++;	
		}
		i = count_x;
		j = count_y;
		while(i >= 0 && j >= 0)	
		{		
			if(x_[i] == y_[j] && x_[i-1] != y_[j-1])			
				printf("%d\n", x_[i]);		
			i--;		
			j--;	
		}
	}
	return 0;
}