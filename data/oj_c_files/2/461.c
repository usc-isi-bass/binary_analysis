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



int main()
{
	int bookno[100];
	char author[100][26]; 
	int numOfauthor[26] = {0};
	int nbook, max = 0, maxno;
	char maxauthor;
	cin >> nbook;
	int i, j;
	for ( i = 0; i < nbook; i ++)
	{
		cin >> bookno[i];
		cin.get();
		cin.getline(*(author + i), 26);
	}
	for ( i = 0; i < nbook; i ++)
		for ( j = 0; author[i][j] !='\0'; j ++)
		{
			numOfauthor[author[i][j] - 'A'] ++;
		}
	for ( i = 0; i < 26; i ++)
	{
		if ( numOfauthor[i] > max)
		{
			max = numOfauthor[i];
			maxno = i;
		}
	}
	maxauthor = maxno + 'A';
	cout << maxauthor << endl;
	cout << numOfauthor[maxno] << endl;
	for ( i = 0; i < nbook; i ++)
		for ( j = 0; author[i][j] != '\0'; j ++)
		{
			if ( author[i][j] == maxauthor )
				cout << bookno[i] << endl;
		}
	return 0;
}
