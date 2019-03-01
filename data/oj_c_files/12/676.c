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

//**************************
//?????	
//?????
//???2011.10.22
//**************************
int main()         //???
{
	double a[18];           //????
	int i, j, k, c, d;        //????????
	double b;           // ???????
	a[0] = 0;             
	for(i = 1; ;i++)         
	{
		cin >> a[1];       
		if(a[1] == -1) break;         //??????
		for(j = 2; ;j++)     //????        
		{
			cin >> a[j];
			if(a[j] == 0) break;      //???0?????
		}
		k = 0;              //k????
		for(c = 1;c < j;c++)           //?????
		{
			for(d = 1;d < j;d++)
			{
				b = a[c] / a[d];
				if(b == 2)          //??????2
					k++;
			}
		}
		cout << k << endl;         //????????
	}
	return 0;
}
