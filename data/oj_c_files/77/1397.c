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

char kid[100];
int paidui (int n, char b, char g)
{
	for (int i = n; kid[i] != '\0'; i++)
	{
		while (kid[n] == '^')       //??????                            
			n++;
		if (kid[n] == b)		//?????
		{
			kid[n] = '^';         //?????
			int k = paidui (n + 1, b, g);  //???????????
			cout << n << " " << k << endl;    //?????????
		}
		else                //??????
		{
			kid[n] = '^';          //????
			return n;      //??????????
		}
	}
}
int main()
{
	char girl, boy;
	int n;
	cin >> kid;
	boy = kid[0];        //???????????
    n = strlen(kid);       
	girl = kid[n - 1];     //????????????
	paidui (0, boy, girl);
	return 0;
}