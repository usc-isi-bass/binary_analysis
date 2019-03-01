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

/**
* @file		????.cpp
* @author	??	1000012792
* @date		2010.11.15
*/
int main()
{
	int a, b, c;
	for(a=0;a<3;a++)							//0,1,2????????
		for(b=0;b<3;b++)
			for(c=0;c<3;c++)
			{
				if((a + (b>a) + (c==a) == 2)&&  //??????????????????2
					(b + (a>b) + (a>c) == 2)&&
					(c + (c>b) + (b>a) == 2))
				if(a>b)							//??????????????????ABC
				{
					if(b>c)
						cout << "CBA";
					else
					{
						if(a>c)
							cout <<"BCA";
						else
							cout <<"BAC";
				
					}
				}
				else
				{
					if(a>c)
						cout << "CAB";
					else
					{
						if(b>c)
							cout <<"ACB";
						else
							cout << "ABC";
					}
				}

			}
		return 0;
}