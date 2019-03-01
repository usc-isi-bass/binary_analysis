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
// ????1000012789_2.cpp                                      *
// ???wusy                                                    *
// ???12,1                                                    *
// ???????                                                *
//****************************************************************
void jiaogu(int t);                                     // ??????
int main()
{
	int n;
	cin >> n;
	jiaogu(n);                                          // ????
	return 0;
}

void jiaogu(int t)                         
{
	int p;                                              // ??????
	if (t == 1)                                         // ???1?????                
		cout << "End" << endl;
	else
	{
		if (t % 2 == 0)                                 // ?????
		{
			p = t;
			t = t / 2;                                  // ??????
			cout << p << "/" << 2 << "=" << t << endl;                                     //??????
				jiaogu(t);                   
		}
		else 
		{                                               //??
			p = t;
			t = t * 3 + 1;
			cout <<  p << "*" << "3+1" << "=" << t << endl;
				jiaogu(t);
		}
	}
}



