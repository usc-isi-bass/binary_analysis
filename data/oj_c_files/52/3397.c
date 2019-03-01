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

/**
* @file 1000010424_6.cpp
* @author ???
* @date 2010?12?8
* @description
* ??????: ????     
*/



void move(int*, int, int);									//???????

int main()
{
	int num[100], n, m;										//???????????????
	int i;													//?????

	cin >> n >> m;

	for(i = 0; i < n; i++)
		cin >> num[i];

	move(num, n, m);										//??? 

	for(i = 0; i < n; i++)
		if(i == 0)
			cout << num[i];
		else
			cout << ' ' << num[i];

	cout << endl;

	return 0;
}

void move(int *num, int n, int m)
{
	int temp = *(num + n - 1);								//???????
	int i;

	for(i = n - 2; i >= 0; i--)
		*(num + i + 1) = *(num + i);						//???

	*num = temp;											//??????
	m--;

	if(m == 0)
		return;
	else
		move(num, n, m);
}