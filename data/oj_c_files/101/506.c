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

//***********************
//??????
//?????
//???2011.10.16
//***********************
int main()          //???
{                 //?????
	int a, b, c;         //????A?B?C???
	a = 3;                //???????????
	b = 2;
	c = 1;
	if((b <= a && c != a) + (a > b || a > c) + (c > b && b > a) == 3) 
		cout << "CBA";
	else 
	{
		a = 3;
	    b = 1;
	    c = 2;
	    if((b <= a && c != a) + (a > b && a > c) + (c > b || b > a) == 3)
			cout << "BCA";
		else
		{
			a = 2;
	        b = 1;
          	c = 3;
            if((b > a || c == a) + (a > b && a > c) + (c <= b && b <= a) == 3)
		        cout << "BAC";
			else
			{
				a = 2;
             	b = 3;
	            c = 1;
                if((b > a || c == a) + (a <= b && a <= c) + (c > b && b > a) == 3)
		            cout << "CAB";
				else
				{
					a = 1;
	                b = 2;
	                c = 3;
                    if((b > a && c == a) + (a <= b || a <= c) + (c <= b && b <= a) == 3)
		                cout << "ABC";
					else
					{
						a = 1;
	                    b = 3;
	                    c = 2;
                        if((b > a && c == a) + (a <= b && a <= c) + (c <= b || b <= a) == 3)
	                     	cout << "ACB";
					}
				}
			}
		}
	}
	return 0;
}          //?????