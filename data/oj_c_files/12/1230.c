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
//*?????   **
//*?????? 1200012837 **
//*???2012.10.29  **
//********************************

int main()
{
	int i = 0;
	do
	{	
		int a[16] = {0};
		do
		{	
			cin >> a[i];
			i++;
		}while(a[i-1] != 0 && a[i-1] != -1);
		
		if(a[i-1] == 0)
		{
			int n = 0;
			for(int j = 0; j <= i-2; j++)
			for(int k = 1; k <= i-2 - j; k++)
			{
				if(a[j] == a[j+k] * 2 || a[j+k] == a[j] * 2)
					n++;
			}
			cout << n << endl;
			i = 0;
		}
		if(a[0] == -1)break;
	}while(i != 1);

	return 0;
}
