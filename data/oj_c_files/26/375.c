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

//****************************************************************
// ????1000012789_1.cpp                                      *
// ???wusy                                                    *
// ???12,8                                                    *
// ???????                                                *
//****************************************************************
int main()
{
	char a[100];                                           // ??????                   
	cin.getline(a,100);                      
	int i, j, count = 0; 
	char *p = NULL;                                        // ????
	p = a; 
	for (i = 1; *(p + i - 1) != '\0'; i++)                     
	{
		if (*(p + i) == ' ')                                   // ?????????+1
			count++;
		else 
		{
			if (count >= 2)                                // ??????2
			{
				for (j = i; *(p + j - 1) != '\0'; j++)         // ????????????
					*(p + j - count + 1) = *(p + j);               // ????
				i = i - count + 1;                         // ?i?????
			} 
			count = 0;                                     // ?????
		} 

	}                                                // ????????
	for (p = a, i = 0; *(p + i) != '\0'; i++)                  // ??
		cout << *(p + i);
	return 0;
}
	
	
