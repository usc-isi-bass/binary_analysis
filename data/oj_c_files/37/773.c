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


int main (void)
{
    int i, j, k, n, alpha[100][100] = {0}, check;
    char temp[10000]; 
    cin >> n;
	cin.get();
    for (i = 0; i < n; i++)
    {
        check = 0;
        cin.getline(temp, 9000);
        for (j = 0; temp[j] != '\0'; j++ )
        {
            alpha[i][(int)(temp[j])]++;
        }
        for (k = 10; k < 120; k++)
        {
            if (alpha[i][k] == 1)
            {
               check = 1;
            }
        }
        if (check == 0)
           cout <<"no"<< endl;
		
		else
		{
			for (j = 0; temp[j] != '\0'; j++ )
			{
				if (alpha[i][(int)(temp[j])] == 1)
				{ 
				  cout << temp[j] <<endl;
				  break;
				} 
			}

		}
        
    }
    
    return 0;
}
