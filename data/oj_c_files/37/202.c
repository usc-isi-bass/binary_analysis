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

// ??????.cpp : Defines the entry point for the console application.
//


int main()
{
	
	int i = 0;
	int t = 0;
	int m = 0;
	int len = 0;

	cin >> t;
	cin.ignore();

	for( ;t > 0;t-- )
	{
		int num[26] = {0};
		char zifu[100001];
		int sum = 0;
		cin.getline(zifu,100001);

		len = strlen(zifu);

		for( i = 0;i <= len - 1;i++ )
		{
			num[zifu[i] - 'a']++;
		}

		for( i = 0;i <= len - 1;i++ )
		{
			if( num[zifu[i] - 'a'] == 1 )
			{
				sum = 1;
				break;
			}
		}

		if( sum == 1 )
			cout << zifu[i] << endl;
		else 
			cout << "no" << endl;

	}

	return 0;
}
