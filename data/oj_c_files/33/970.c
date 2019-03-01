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
	int n; 
	cin >> n; 

	for (int i = 0; i < n ;i++)
	{
		char c[10000] ={0};
		cin >> c;

		for (int j = 0; c[j] != '\0'; j++)
		{
			switch(c[j])
			{
			case'A' : cout << "T"; break;
			case'T' : cout << "A"; break;
			case'C': cout << "G" ; break;
			case'G': cout << "C"; break;
			}
		}
		cout << endl;
	}

	
	return 0;
}



