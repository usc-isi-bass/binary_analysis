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

/*
 * checklimit.cpp
 *
 *  Created on: 2013-10-25
 *      Author: g199
 */



int main()
{
	int A,B,C;
	for (A = 1; A <=3 ; A ++)
		for (B = 1; B <= 3; B ++)
			for (C = 1; C <= 3; C ++)
	if
	(((B > A) + (C == A) + A == 3) + ((A > B)+ (A > C) + B == 3) + ((C > B)+ (B > A) + C == 3) == 3)
		{
		int man[3];
		man[0]= A * 1000 + 'A';
		man[1]= B * 1000 + 'B';
		man[2]= C * 1000 + 'C';
		sort(man,man+3);
		cout << (char)(man[0]%1000) << (char)(man[1]%1000) << (char)(man[2]%1000) <<endl;
		}
	return 0;
}
