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

//***************************************
//*  ????1.cpp                      *
//*  ??????1100012964?           *
//*  ?????2011?11?               *
//*  ?????????                 *
//***************************************
void check(char *);        
int main()                                        //???        
{
	char a[501];                                  //?????
	cin >> a;                                     //?????
    check(a);                                     //??
	return 0;
}                                                 
void check(char * a)                              //????????a
{
    int i, j, k, l, p, q;
	l = strlen(a);         
    for (i = 2; i <= l; i++)                      //????????????
	{
		for (j = 0; j <= l - i; j++)
		{
            q = 0;                                //??????q
			for (p = j; p < j + i; p++)
			{
		        if (a[p] == a[2 * j + i - p - 1])
			       q++;
			}
			if (q == i)	                          //??????????????????      
			{
			    for (k = j; k <= j +  i - 1; k++)
					cout << a[k];
				cout << endl;
			}
		}
	} 
}                                                 //????
	