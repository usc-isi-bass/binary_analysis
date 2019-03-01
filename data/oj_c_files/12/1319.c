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

//????1.cpp
//??????
//???1200062704
//???????????
int main()
{
	int a[16] = {0};                                    
	int i, j, num = 0;                             
	while(1)                           
	{
		for(i = 0; i < 16; i++)
		{
			cin >> a[i];                   
			if(a[i] == 0 || a[i] == -1)
			{
				break;
			}                                     
			if(i > 0)                         
			{
				for(j = 0; j < i; j++)
				{
					if(a[i] * 2 == a[j] || a[j] * 2 == a[i])
					{
						num++;
					}
				}
			}                
		}
		if(a[0] == -1)
		{
			break;
		}                                         
		cout << num << endl;
		num = 0;                                     
	}
	return 0;
}	                                  
