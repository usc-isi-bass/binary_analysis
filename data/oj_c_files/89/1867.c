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

//**********************************************************
//*  ?????4.cpp                                       *
//*  ??????1200012906                                *
//*  ???2012?12?10?                                  *
//*  ???????????                                *
//**********************************************************


struct
{
	int know;   //?????
	int known;   //?????
}people[10000];
int main()
{
	int n, i, j, flag = 0;
	cin >> n;
	while(cin >> i >> j && i != 0 || j != 0)
	{
		people[i].know++;
		people[j].known++;
	}
	for(i = 0; i < n; i++)
		if (people[i].know == 0 && people[i].known == n - 1)
		{
			cout << i << endl;
			flag = 1;
		}
	if (flag == 0)
		cout << "NOT FOUND" << endl;
	return 0;
}