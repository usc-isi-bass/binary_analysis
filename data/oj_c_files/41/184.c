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
    int r[6] = {0}, a[6] ={0}, i, count = 0;
	for (r[1] = 1; r[1] < 6; r[1]++) 
		for (r[2] = 1; r[2] < 6; r[2]++) 
			for (r[3] = 1; r[3] < 6; r[3]++) 
				for (r[4] = 1; r[4] < 6; r[4]++) 
					for (r[5] = 1; r[5] < 6; r[5]++)
					{
						a[1] = (r[5] == 1);
						a[2] = (r[2] == 2);
						a[3] = (r[1] == 5);
						a[4] = (r[3] != 1);
						a[5] = (r[4] == 1);
						if (((a[1]+a[2]+a[3]+a[4]+a[5]) == 2) && r[5] != 2 && r[5] != 3)
						{
							if (r[1] !=r [2] && r[1] != r[3] && r[1] != r[4] && r[1] != r[5] && r[2] != r[3] && r[2] != r[4] && r[2]!=r[5]&&r[3]!=r[4]&&r[3]!=r[5]&&r[4]!=r[5])
							{
						       for (i = 1; i < 6; i++)
							   {
							    	if (a[i] == 1)
										if( r[i] == 1 || r[i]==2)
											count ++;
							   }
							   if (count == 2)
		         					 cout << r[4] << " " << r[2] << " " << r[1] << " " << r[3] << " " << r[5];
							}
						} 
					}
	return 0;
} 
