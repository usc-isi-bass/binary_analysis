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
	int height[50],flag[50],max,i,j; 
	int num ; 

	scanf("%d",&num); 

	for (i = 0; i < num; i ++) 
	{ 
		scanf("%d",&height[i]); 
		flag[i] = 1; 
	} 
	for (i = 0; i < num; i ++) 
	{ 
		for (j = 0; j < i; j ++) 
		{ 
			if (height[j] >= height[i]) 
			{ 
				if (flag[j] + 1 > flag[i])
					flag[i] = flag[j] + 1; 
			} 
		} 
	} 
	
	max = flag[0]; 
	for (i = 1; i < num; i ++) 
	{ 
		if (flag[i] > max) 
			max = flag[i]; 
	} 
	printf("%d\n",max); 
	return 0; 
}
