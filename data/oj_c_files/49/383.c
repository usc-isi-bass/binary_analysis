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
	char a[500];
	int i, j, k, w;
	cin.getline(a, 500);
	int len = strlen(a);
	for (i = 2; i <= len; i++)
	{
		if( i%2==0)
		{
			for( j =0;j <= len-i;j++)
			{
				for(w=0;w<i/2;w++)
				{
					if(a[j+w] != a[i+j-1-w])
					break;
				}
				if(w == i/2)
				{
					for(k = 0; k<i;k++)
						cout << a[j+k];
					cout << endl;
				}
			}
		}
		else
		{
			for( j =0;j <= len-i;j++)
			{
				for(w=0;w < i/2 - 1;w++)
				{
					if(a[j+w] != a[i+j-1-w])
					break;
				}
				if(w == i/2)
				{
					for(k = 0; k < i; k++)
						cout << a[j+k];
					cout << endl;
				}
			}
		}
	}
	return 0;
}
					


	
