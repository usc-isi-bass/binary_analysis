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

//*************************************************************
//*                  ???????                           *
//*                  ?????1000010573                     *
//*                  ?????2010?11?                     *         
//*************************************************************



int main()               //??? 
{

	int A = 0 , B = 0 , C = 0 ;//?????? 
	int a1 = 0, a2 = 0, b1 = 0, b2 = 0 , c1 = 0 , c2 = 0 ;
	//??		
	for (A = 0; A < 3; A++)// A??A?????
	{
		for (B = 0; B < 3; B++)// B??B?????
		{
			for (C = 0; C < 3; C++)// C??C?????
			{
				a1 = (B > A);// ?a1?a2????A??????
				a2 = (C == A);
				b1 = (A > B);//?b1?b2????B??????
				b2 = (A > C);
				c1 = (C > B);
				c2 = (B > A);//?c1?c2????C??????
				if (a1 + a2 + A == 2 && b1 + b2 + B == 2 && c1 + c2 + C == 2)// ????????????????
				{
				// ???????????????
					if (A < B && B < C)					
					{cout << "A" << "B" << "C";}
					if (A < C && C < B) 
					{cout << "A" << "C" << "B";}
					if (B < A && A < C)
					{cout << "B" << "A" << "C";}
					if (B < C && C < A)
					{cout << "B" << "C" << "A";}
					if (C < B && B < A)
					{cout << "C" << "B" << "A";}
					if (C < A && A < C)
					{cout << "C" << "A" << "B";}
				}
			} 
		}
	}
    return 0; 
}
