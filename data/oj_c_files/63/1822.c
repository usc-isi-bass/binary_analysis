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

// * * * * * * * * * * * * * * *
// *???????             *
// *??????  1300013011   *
// *???2013.11.4            *
// * * * * * * * * * * * * * * *
int main()
{
	// a?b???????c????????
	int a[100][100], b[100][100], c[100][100] = {0}, x1, x2, y1, y2;
	
	cin >> x1 >> y1;
	for (int ia = 0; ia < x1; ia++)   // ???????????
	{
		for (int ka = 0; ka < y1; ka++)
			cin >> a[ia][ka];
	}
	
	cin >> x2 >> y2;
	for (int ib = 0; ib < x2; ib++)   // ???????????
	{
		for (int kb = 0; kb < y2; kb++)
			cin >> b[ib][kb];
	}
	
	for (int i = 0; i < x1; i++)      // i???a???
	{
		for (int k = 0; k < y2; k++)  // k???b???
		{
			for (int l = 0; l < x2; l++)   // a???b???????
				c[i][k] = c[i][k] + a[i][l] * b[l][k];  // ????c?????
		}
	}
	
	for (int ic = 0; ic < x1; ic++)   // ????????c
	{
		for (int kc = 0; kc < y2; kc++)
		{
			if (kc == 0)
				cout << c[ic][kc];
			else
			    cout << " " << c[ic][kc];  // ????????????????
		}
		cout << endl;          // ????????
	}
	return 0;
}