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

//********************************
//????3.cpp                  *
//???2012?11?10?           *
//????? 1? 1200012895      *
//?????13                   *
//********************************
int main()
{
	char num;                                          //num?????????
	int a[101], i = 1, c = 0, j;                       //a??????i?????c????????????j?????
	while ((num = cin.get()) != '\n')                  //??????????a
	{
		a[i] = num - '0';
		i++;
	}
	if (i == 2)                                        //??????????13???????0??????
		cout << "0" << endl << a[1];
	else
	{
		if (i == 3 && (10 * a[1] + a[2]) < 13)
			cout << "0" << endl << 10 * a[1] + a[2];
		else
		{
			for (j = 1; j <= i - 1; j++)
			{
	        	c = 10 * a[j] + a[j + 1];             //?????????????
	        	if (c >= 13)                          //???????13????13???????
				{
		        	cout << c / 13;
		         	a[j + 1] = c % 13;
				}
		        else
				{
		        	if (j != 1 && j != i - 1)         //???????13?????????????????0
					{
			        	cout << "0";
			        	a[j + 1] = c;
					}
		        	else                              //??????????
				        a[j + 1] = c;
				} 
		        if (j == i - 2)                       //???
		        	cout << endl << c % 13;
	        	c = 0;                                //c??
			}
		}
	}
	return 0;
}