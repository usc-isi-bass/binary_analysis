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

//************************
// 6.1.cpp 
// ??  1200018415
// 2012   10 30
//***********************

int main()
{
	int a[16];                      // ?????????16??
	int i = 1, j, k, n = 0; 
	while (cin)                    
	{
		 cin >> a[0];                 // ??a?0?
		if (a[0] == -1)             // ??a?0??-1
		break;                      // ?????????
		for (i = 1; ; i++)            
		{
		cin >> a[i];                // ??a?i?
		if (a[i] == 0)              // ????a?i??0
			break;                  // ??????
		k = i;                      // ??????
		}
	for (j = 0; j <= k - 1; j++)                         // ?????j????????????
	{
		for (i = j + 1; i <= k; i++)                 // ?j???????????     
		{
			if (a[j] * 2 == a[i] || a[i] * 2 == a[j])     // ????????
				n = n + 1;                                // ???1
		}
	}
	cout << n << endl;                                    // ?????????????
	n = 0;                                                // n?????0
	}
	return 0;

}
