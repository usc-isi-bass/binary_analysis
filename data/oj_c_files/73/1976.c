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

//* * * * * * * * * * * * * * * * * * * * * * * * 
//*????1000012839_1                         *
//*???? ????                            *
//*?????                                   *
//*???2010.11.05                             *
//* * * * * * * * * * * * * * * * * * * * * * * * 

int main()
{
	int i, j, k, m, N;	//	????i,j,k,m,N?
    int max, min;	//	max?min????????????????????
    int a[5][5];	//	???????
	 for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
            cin >> a[i][j];	//	???????????	
	for (i = 0, N = 0; i < 5; i++)
    {
        max = a[i][0];	//	??????????max;
        k = 0;
        for (j = 1; j < 5; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
                k = j;	//	?????????????j??k?
            }
        }
        min = a[0][k];	//	???k?????min?
        m = 0;
        for (j = 1; j < 5; j++)
        {
            if (min > a[j][k])
            {
                min = a[j][k];
                m = j;	//	??k?????????j??m?
            }
        }
        if (m == i)	//	???k?????????i???????
		{
			cout << i + 1 << ' ' << k + 1 << ' ' << a[i][k] << endl;	//	??????
			N++;
		}
	}
	if (N == 0)	
		cout << "not found" << endl;	//	????????"not found";

	return 0;
}








