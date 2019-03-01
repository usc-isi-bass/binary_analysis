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
	char a[100][100];
    int i, j, k, l, n, n2, m, num = 0;

    cin >> n;
	n2 = n * n;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{	
			cin >> a[i][j];
			if (a[i][j] == '@')
                num++;
        }
    cin >> m; 
	for (k = 1; k < m; k++)
	{    
		 if (num >= n2)
			 break;
	     for (i = 0; i < n; i++)
		     for (j = 0; j < n; j++)
				 if (a[i][j] == '@')
				 {
					 if (i > 0 && a[i - 1][j] == '.')
					 {	 
                         a[i - 1][j] = '*';
						 num++;
					 }
					 if (j > 0 && a[i][j - 1] == '.')
					 {	 
                         a[i][j - 1] = '*';
					     num++;
					 }
					 if (i < n - 1 && a[i + 1][j] == '.' )
					 {	 
                         a[i + 1][j] = '*';
					     num ++;
					 }
					 if (j < n - 1 && a[i][j + 1] == '.' )
					 {
                         a[i][j + 1] = '*';
						 num ++;
					 }
				 }	
         for (i = 0; i < n; i++)
		     for (j = 0; j < n; j++)
				 if (a[i][j] == '*')
					 a[i][j] = '@';
				 
	}

	cout << num << endl;
	    return 0;
}